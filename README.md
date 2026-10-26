
*This project has been created as part of the 42 curriculum by ynaji.*

# Libft

## Description

In this project, I implemented my own C library by recreating several functions from the standard C library, as well as developing additional utility functions.

The project produces a static library named `libft.a`, which can be linked to other C programs and reused in future projects.

### Instructions

Clone the repository and navigate to the project directory:

```bash
git clone <repository-url>
cd libft
```

Compile the library:

```bash
make
```

This generates the static library `libft.a`.

Depending on the Makefile, the following commands may also be available:

```bash
make clean   # Remove object files
make fclean  # Remove object files and the library
make re      # Recompile the library from scratch
```

### Usage

To use Libft in another C project, include the library header in your source file:

```c
#include "libft.h"
```

Compile your program with the library:

```bash
cc main.c -I. -L. -lft -o program
```

Run the executable:

```bash
./program
```

Adapt the include path and compilation command if your project uses a different directory structure.

## Library Description

Libft is organized into several groups of functions. The exact contents depend on the functions implemented in the project.

### 1. Character Classification and Conversion

Functions that check or convert individual characters.

- `ft_isalpha` — checks whether a character is alphabetic.
- `ft_isdigit` — checks whether a character is a digit.
- `ft_isalnum` — checks whether a character is alphanumeric.
- `ft_isascii` — checks whether a character belongs to the ASCII character set.
- `ft_isprint` — checks whether a character is printable.
- `ft_toupper` — converts a lowercase letter to uppercase.
- `ft_tolower` — converts an uppercase letter to lowercase.

### 2. String Manipulation

Functions for measuring, searching, comparing, and manipulating strings.

- `ft_strlen` — calculates the length of a string.
- `ft_strlcpy` — copies a string into a destination buffer with a size limit.
- `ft_strlcat` — appends a string to a destination buffer with a size limit.
- `ft_strchr` — locates the first occurrence of a character in a string.
- `ft_strrchr` — locates the last occurrence of a character in a string.
- `ft_strncmp` — compares two strings up to a specified number of characters.
- `ft_strnstr` — searches for a substring within a string up to a specified length.
- `ft_strdup` — duplicates a string by allocating new memory.

### 3. Memory Management

Functions for manipulating memory blocks.

- `ft_memset` — fills a memory area with a specified byte.
- `ft_bzero` — sets a memory area to zero.
- `ft_memcpy` — copies bytes between memory areas that do not overlap.
- `ft_memmove` — copies bytes safely when memory areas overlap.
- `ft_memchr` — searches a memory area for a byte.
- `ft_memcmp` — compares two memory areas.
- `ft_calloc` — allocates memory and initializes it to zero.

### 4. Conversion and Output

Functions for converting values and writing data.

- `ft_atoi` — converts the initial portion of a string to an integer.
- `ft_itoa` — converts an integer into a string.
- `ft_putchar_fd` — writes a character to a file descriptor.
- `ft_putstr_fd` — writes a string to a file descriptor.
- `ft_putendl_fd` — writes a string followed by a newline to a file descriptor.
- `ft_putnbr_fd` — writes an integer to a file descriptor.

### 5. Additional String Functions

Utility functions that create or manipulate strings.

- `ft_substr` — creates a substring from a given string.
- `ft_strjoin` — concatenates two strings into a newly allocated string.
- `ft_strtrim` — removes specified characters from the beginning and end of a string.
- `ft_split` — splits a string into an array of strings using a delimiter.
- `ft_strmapi` — applies a function to each character to create a new string.
- `ft_striteri` — applies a function to each character using a pointer to that character.

### 6. Linked Lists

If the bonus part is implemented, Libft also includes functions for managing singly linked lists using the `t_list` structure.

- `ft_lstnew` — creates a new list element.
- `ft_lstadd_front` — adds an element to the beginning of a list.
- `ft_lstsize` — counts the elements in a list.
- `ft_lstlast` — returns the last element of a list.
- `ft_lstadd_back` — adds an element to the end of a list.
- `ft_lstdelone` — deletes one list element.
- `ft_lstclear` — deletes an entire list.
- `ft_lstiter` — applies a function to each list element.
- `ft_lstmap` — creates a new list by applying a function to each element.


## Resources

- [42 School](https://42.fr/)
- [GNU Compiler Collection documentation](https://gcc.gnu.org/onlinedocs/)
- [GNU Make manual](https://www.gnu.org/software/make/manual/)
