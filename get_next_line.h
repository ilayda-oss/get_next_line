/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sudeilaydaozkara <sudeilaydaozkara@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 19:10:59 by sudeilaydao       #+#    #+#             */
/*   Updated: 2025/01/01 14:45:40 by sudeilaydao      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10

# endif

# include <stdlib.h>
# include <unistd.h>

int		ft_strlen(char *s);
char	*ft_strjoin(char *s1, char *s2);
int		ft_strchr(char *s, char c);
char	*get_next_line(int fd);

#endif