*This project has been created as part of the 42 curriculum by mafvicen.*

# ft_printf

> Because ft_putnbr() and ft_putstr() aren't enough

## Description

`ft_printf` is a recoding of the C library function `printf()`. The goal is to learn how **variadic functions** work in C (`va_start`, `va_arg`, `va_end`) and to write clean, extensible code. The result is a static library, `libftprintf.a`, that exposes:

```c
int	ft_printf(const char *, ...);
```

It returns the number of characters printed, like the original `printf()`, and does not implement the buffer management of the original.

### Supported conversions

| Conversion | Output |
|---|---|
| `%c` | a single character |
| `%s` | a string (`(null)` if the pointer is `NULL`) |
| `%p` | a `void *` pointer in hexadecimal, prefixed with `0x` (`(nil)` for `NULL`) |
| `%d` | a signed decimal number |
| `%i` | a signed integer in base 10 |
| `%u` | an unsigned decimal number |
| `%x` | an unsigned number in lowercase hexadecimal |
| `%X` | an unsigned number in uppercase hexadecimal |
| `%%` | a percent sign |

An unknown conversion (for example `%k`) is printed as is, and a lone `%` at the end of the format string is ignored.

## Instructions

### Compilation

```sh
make        # builds libftprintf.a at the root of the repository
make clean  # removes the object files
make fclean # removes the object files and libftprintf.a
make re     # fclean + all
```

The Makefile uses `cc` with `-Wall -Wextra -Werror`, builds the library with `ar rcs`, and does not relink if nothing changed.

### Usage

Include the header in your code and link against the library:

```c
#include "ft_printf.h"

int	main(void)
{
	int	n;

	n = ft_printf("Hello %s, you are %d years old (%x)\n", "42", 21, 255);
	ft_printf("returned: %d\n", n);
	return (0);
}
```

```sh
cc -Wall -Wextra -Werror main.c -L. -lftprintf -o test
./test
```

### Testing

Compare the output and the return value with the real `printf`:

```c
int	a = ft_printf("%c %s %d %i %u %x %X %p %%\n", 'a', "hi", -42, 7, 3000000000u, 255, 255, &a);
int	b = printf("%c %s %d %i %u %x %X %p %%\n", 'a', "hi", -42, 7, 3000000000u, 255, 255, &a);
printf("%d %d\n", a, b);
ft_printf("%d %x %u\n", -2147483648, -2, 0);
```

## Algorithm and data structures

### Overall flow

1. `ft_printf` initializes the `va_list` with `va_start` and walks the format string once, character by character.
2. A normal character is written directly with `write` and counted.
3. When a `%` is found, the next character is the conversion specifier and is passed to `ft_choice`, which reads the matching argument with `va_arg` using the **exact type** of that conversion and calls the right printing function.
4. Every printing function returns the number of bytes it wrote, and `ft_printf` adds them up. This sum is the return value.
5. `va_end` is called before returning.

### Why this design

- **Dispatch function (`ft_choice`).** Each conversion has its own small function, so adding a new conversion means adding one branch and one function. This keeps the code extensible, as the subject asks.
- **`va_list` passed by pointer.** `ft_choice` receives `va_list *` and uses `va_arg(*ap, type)`. A `va_list` may be an array type on some platforms, so passing a pointer to it is the portable way to let the callee advance the shared argument state.
- **Reading the right type for each conversion.** `%c` is read as `int` (default argument promotion), `%d`/`%i` as `int`, `%u`/`%x`/`%X` as `unsigned int`, `%s` as `char *` and `%p` as `void *`. Reading the wrong type is undefined behavior and would, for example, print `-1` instead of `ffffffff` for `%x`.
- **One recursive function for all numbers (`ft_printbase`).** It takes an `unsigned long`, a string containing the digits of the base, and the base length. It recurses on `n / len` first (so the most significant digit is printed first) and then writes `base[n % len]`. The same function therefore handles base 10 (`%u`), lowercase hex (`%x`), uppercase hex (`%X`) and pointers (`%p`, with a full 64-bit `unsigned long`, so addresses are not truncated).
- **Signed numbers (`ft_printnbr`).** The `int` is copied into a `long` before being negated, which makes `INT_MIN` safe, then the sign is written and `ft_printbase` prints the absolute value.
- **No buffer and no extra data structure.** The only "data structure" is the digit string for each base. Output is written with `write` and the byte count is accumulated from the return values of `write`, so no counting formula and no allocation are needed (no `malloc`, so no leaks). The recursion depth is at most the number of digits (20 for a 64-bit decimal, 16 for a 64-bit hex), so stack usage is negligible.

### Files

| File | Role |
|---|---|
| `ft_printf.c` | main function, walks the format string |
| `ft_choice.c` | picks the conversion and reads the argument |
| `ft_printc.c` | `%c` |
| `ft_printstr.c` | `%s` |
| `ft_printnbr.c` | `%d` and `%i` |
| `ft_printbase.c` | `%u`, `%x`, `%X` (generic base printing) |
| `ft_printp.c` | `%p` |
| `ft_printf.h` | header with the prototypes |

<!-- Adjust this table so it matches your final files. -->

## Resources

- `man 3 printf`
- `man 3 stdarg` (variadic functions: `va_start`, `va_arg`, `va_copy`, `va_end`)
- `man 2 write`
- The 42 Norm

### Use of AI
reviewing my code and explaining compiler errors and variadic argument rules, suggesting the design for the base-printing function, drafting this README. State which parts you wrote and understood yourself.
