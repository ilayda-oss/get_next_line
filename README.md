# Get Next Line

## Introduction

This project is designed to implement a function that reads a single line from a file descriptor. It introduces the concept of static variables in C programming while adding a convenient function to your coding toolbox.

## Goals

- Learn how to use static variables effectively in C.
- Develop a robust function to handle reading lines from a file descriptor.
- Enhance your understanding of file handling and memory management in C.

## Project Requirements

### Mandatory Files

- `get_next_line.c`
- `get_next_line_utils.c`
- `get_next_line.h`

### Compilation

Your project must:
- Adhere to the Norm coding standards.
- Use `-Wall`, `-Wextra`, and `-Werror` flags for compilation.
- Include at least the following Makefile rules:
  - `$(NAME)`
  - `all`
  - `clean`
  - `fclean`
  - `re`

### Restrictions

- You may use the following functions: `read`, `malloc`, and `free`.
- Global variables are **forbidden**.
- You cannot use `lseek()` or your `libft`.

---

## Mandatory Part

### Function Prototype

```c
char *get_next_line(int fd);
```
## Requirements
The function must:

- Read from the file descriptor one line at a time.
- Return a single line that ends with a \n or the end of the file.
- Return NULL if there’s nothing else to read or an error occurs.
Your implementation must:

- Work with different buffer sizes defined during compilation using the -D BUFFER_SIZE=n flag.
- Handle both file inputs and standard input correctly.
- Free all allocated memory to avoid leaks.
## Example Compilation Command
```bash
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c -o gnl
```

## Forbidden Practices
- Reading the entire file in one go and processing each line afterward is not allowed.
 -Each call to get_next_line() must read only as much as necessary to return the next line.
## Submission and Peer Evaluation
- Submit your project to your assigned Git repository.
- Only the files in the repository will be evaluated.
- Ensure the file names and structures are correct before submission.
## Repository Structure
```text
project-root/
├── get_next_line.c
├── get_next_line_utils.c
├── get_next_line.h
├── bonus/
│   ├── get_next_line_bonus.c
│   ├── get_next_line_bonus.h
│   ├── get_next_line_utils_bonus.c
└── Makefile
```
## Notes
Once completed, consider adding your get_next_line implementation to your libft for future projects.
Create test cases to validate your implementation thoroughly.
```vbnet
This README is structured for clarity and adheres to Markdown syntax, ensuring it will render properly on platforms like GitHub. Let me know if you’d like any adjustments!
```




