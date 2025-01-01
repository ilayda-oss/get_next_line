/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sudeilaydaozkara <sudeilaydaozkara@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 01:25:47 by sudeilaydao       #+#    #+#             */
/*   Updated: 2025/01/01 14:44:53 by sudeilaydao      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_read_line(char *buffer, int fd)
{
	char	*tmp;
	int		ret;

	ret = 1;
	if (!buffer)
	{
		buffer = malloc(sizeof(char) * 1);
		if (!buffer)
			return (NULL);
		buffer[0] = '\0';
	}
	tmp = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!tmp)
		return (NULL);
	while (ret != 0 && !ft_strchr(buffer, '\n'))
	{
		ret = read(fd, tmp, BUFFER_SIZE);
		if (ret == -1)
			return (free(buffer), free(tmp), NULL);
		tmp[ret] = '\0';
		buffer = ft_strjoin(buffer, tmp);
	}
	free(tmp);
	return (buffer);
}

char	*ft_get_line(char *buffer)
{
	size_t		i;
	char		*tmp;

	i = 0;
	if (!*buffer)
		return (NULL);
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (buffer[i] == '\n')
		i++;
	tmp = malloc(sizeof(char) * (i + 1));
	if (!tmp)
		return (NULL);
	i = -1;
	while (buffer[++i] && buffer[i] != '\n')
		tmp[i] = buffer[i];
	if (buffer[i] == '\n')
		tmp[i++] = '\n';
	tmp[i] = '\0';
	return (tmp);
}

char	*ft_get_out_line(char *buffer)
{
	size_t	i;
	size_t	j;
	char	*ret;

	i = 0;
	j = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (buffer[i] == '\0')
	{
		free(buffer);
		return (NULL);
	}
	if (buffer[i] == '\n')
		i++;
	ret = malloc(sizeof(char) * (ft_strlen(buffer) - i + 1));
	if (!ret)
		return (free(buffer), (NULL));
	while (buffer[i])
	{
		ret[j++] = buffer[i++];
	}
	ret[j] = '\0';
	free(buffer);
	return (ret);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*ret;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = ft_read_line(buffer, fd);
	if (!buffer)
		return (NULL);
	ret = ft_get_line(buffer);
	buffer = ft_get_out_line(buffer);
	return(ret);
}
