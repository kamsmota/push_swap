*This project has been created as part of the 42 curriculum by <mafvicen>.*

# Libft

## Description

**Libft** is a C library containing reimplementations of useful functions from the C standard library, together with additional string, memory, character, output, and linked-list utilities.

The goal of the project is to understand how commonly used C functions work by implementing them from scratch. The resulting `libft.a` static library can be reused in future C projects.

This README describes the scope defined by the Libft subject. Update the function list and examples if your submitted implementation differs.

## Library contents

### 1. Character checks and conversions

| Function | Purpose |
|---|---|
| `ft_isalpha` | Checks whether a character is alphabetic. |
| `ft_isdigit` | Checks whether a character is a decimal digit. |
| `ft_isalnum` | Checks whether a character is alphanumeric. |
| `ft_isascii` | Checks whether a value is in the ASCII range. |
| `ft_isprint` | Checks whether a character is printable. |
| `ft_toupper` | Converts a lowercase letter to uppercase. |
| `ft_tolower` | Converts an uppercase letter to lowercase. |

The character-classification functions return `1` when the character matches the tested class and `0` otherwise.

### 2. Memory functions

| Function | Purpose |
|---|---|
| `ft_memset` | Fills a memory area with a byte value. |
| `ft_bzero` | Sets a memory area to zero. |
| `ft_memcpy` | Copies bytes between memory areas. |
| `ft_memmove` | Copies bytes safely when source and destination overlap. |
| `ft_memchr` | Finds a byte in a memory area. |
| `ft_memcmp` | Compares two memory areas. |
| `ft_calloc` | Allocates zero-initialized memory. |

### 3. String functions

| Function | Purpose |
|---|---|
| `ft_strlen` | Returns the length of a string. |
| `ft_strlcpy` | Copies a string into a size-limited destination. |
| `ft_strlcat` | Appends a string within a destination-size limit. |
| `ft_strchr` | Finds the first occurrence of a character. |
| `ft_strrchr` | Finds the last occurrence of a character. |
| `ft_strncmp` | Compares up to a specified number of characters. |
| `ft_strnstr` | Locates a substring within a length-limited string. |
| `ft_strdup` | Allocates and returns a duplicate of a string. |
| `ft_atoi` | Converts the initial numeric portion of a string to an integer. |

### 4. Additional string and output utilities

| Function | Purpose |
|---|---|
| `ft_substr` | Creates a substring from a string. |
| `ft_strjoin` | Concatenates two strings into a new allocation. |
| `ft_strtrim` | Removes specified characters from the beginning and end of a string. |
| `ft_split` | Splits a string into a NULL-terminated array using a delimiter. |
| `ft_itoa` | Converts an integer to a string. |
| `ft_strmapi` | Creates a new string by applying a function to each character and its index. |
| `ft_striteri` | Applies a function to each character by address, allowing modification. |
| `ft_putchar_fd` | Writes a character to a file descriptor. |
| `ft_putstr_fd` | Writes a string to a file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor. |
| `ft_putnbr_fd` | Writes an integer to a file descriptor. |

### 5. Linked-list utilities

The linked-list functions use the following node structure:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

| Function | Purpose |
|---|---|
| `ft_lstnew` | Allocates a new node and initializes its content and `next` pointer. |
| `ft_lstadd_front` | Adds a node at the beginning of a list. |
| `ft_lstsize` | Counts the nodes in a list. |
| `ft_lstlast` | Returns the last node in a list. |
| `ft_lstadd_back` | Adds a node at the end of a list. |
| `ft_lstdelone` | Deletes one node and its content using a supplied deletion function. |
| `ft_lstclear` | Deletes a node and all following nodes, then sets the list pointer to `NULL`. |
| `ft_lstiter` | Applies a function to the content of every node. |
| `ft_lstmap` | Builds a new list by applying a function to each node's content. |

The list's `content` field is a `void *`, so it can hold data of different types. The `next` field points to the next node, or `NULL` for the last node.

## Instructions

### Requirements

- A C compiler (`cc`).
- `make`.
- The `ar` utility to create the static library.

### Compile the library

Clone the repository and enter its directory:

```sh
git clone <repository-url>
cd <repository-directory>
```

Build the library:

```sh
make
```

This should produce `libft.a` at the root of the repository. The project subject requires compilation with `-Wall -Wextra -Werror` and the use of `ar` to create the library.

Available Makefile targets:

```sh
make        # Build libft.a
make all    # Build the library
make clean  # Remove object files
make fclean # Remove object files and libft.a
make re     # Clean and rebuild
```

### Use Libft in another C project

Include the header in your source file:

```c
#include "libft.h"
```

Compile your program with the library. For example, if your source file is `main.c` and the library is in the current directory:

```sh
cc -Wall -Wextra -Werror main.c -L. -lft -o program
```

Run it:

```sh
./program
```

Make sure the compiler can find `libft.h` (for example, keep it in the project directory or add the appropriate include path).

## Example

```c
#include "libft.h"
#include <unistd.h>

int main(void)
{
    char    *message;

    message = ft_strjoin("Hello, ", "Libft!");
    if (!message)
        return (1);
    ft_putendl_fd(message, STDOUT_FILENO);
    free(message);
    return (0);
}
```

If you use `free` in your own code, include `<stdlib.h>` as well.

## Implementation notes

- The project is written in C and must follow the 42 Norm.
- No global variables are allowed.
- Helper functions should be declared `static` when they are only needed inside one source file.
- All dynamically allocated memory must be released when it is no longer needed.
- Functions should handle allocation failures as specified by their contracts.
- The subject requires the source files and `libft.h` to be placed at the repository root, and the generated `libft.a` to be created there.
- The Makefile must provide `$(NAME)`, `all`, `clean`, `fclean`, and `re` rules; for this project, `$(NAME)` should build `libft.a`.

## Testing

The subject encourages writing test programs, although they do not need to be submitted. Test normal cases, boundary cases, NULL inputs where the function contract permits them, overlapping memory regions for `ft_memmove`, and allocation-failure paths where practical.

You can compare behavior with the corresponding system functions where available. On glibc-based systems, `strlcpy`, `strlcat`, and `bzero` may require the BSD compatibility library for comparison; the subject notes that this can involve `<bsd/string.h>` and `-lbsd`.

## Resources

- `man` pages for the corresponding C library functions (for example, `man strlen`, `man memcpy`, and `man calloc`).
- The C standard library documentation and reference material for string, memory, and character-handling functions.
- The 42 Libft subject (version 19.3), which defines the required functions, prototypes, constraints, and README requirements.
- The 42 Norm and project evaluation guidelines.

### AI usage

AI was used to help organize and draft this README from the Libft subject document. It was not used here to verify or generate the project's C implementation. Review the README against your actual source code, and describe any additional AI assistance accurately before submitting.

## Author

- **42 login:** <mafvicen>
- **School:** 42
