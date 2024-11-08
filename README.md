# Libftprintf - Custom printf Library

**Libftprintf** is a custom implementation of the standard `printf()` function from libc. This project is part of my journey to master C programming and to deepen my understanding of variadic functions, memory management, and custom library creation.

## Project Description

In this project, I recreated the `printf()` function under the name `ft_printf()`. The function mimics the behavior of the original `printf()` while handling various conversion specifiers. The goal was to replicate the core functionality without implementing buffer management, focusing on providing the correct outputs for specific types of data.

## Functionality Implemented

The `ft_printf()` function supports the following conversions:

- **%c**: Prints a single character.
- **%s**: Prints a string.
- **%p**: Prints a pointer (void*) in hexadecimal format.
- **%d**: Prints a signed decimal number.
- **%i**: Prints an integer in base 10.
- **%u**: Prints an unsigned decimal number.
- **%x**: Prints a number in hexadecimal (lowercase format).
- **%X**: Prints a number in hexadecimal (uppercase format).
- **%%**: Prints a percent sign (`%`).

The implementation uses variadic arguments (`...`) and functions such as `va_start`, `va_arg`, `va_copy`, and `va_end` for argument processing.

## Requirements

- **Libftprintf** must be compiled into a static library (`libftprintf.a`).
- **External functions used**: `malloc`, `free`, `write`, `va_start`, `va_arg`, `va_copy`, `va_end`.
- **File Submission**:
  - Makefile (with rules: `NAME`, `all`, `clean`, `fclean`, `re`)
  - Header files (`*.h`, `*/*.h`)
  - Source files (`*.c`, `*/*.c`)

## Compilation Instructions

1. Clone the repository to your local machine.
2. Navigate to the root directory of the project.
3. Use `make` to compile the library:

```bash
make
```

This will create `libftprintf.a` in the root directory of the repository.

## Example Usage

After compiling the `libftprintf.a`, you can use `ft_printf()` in your projects. Here's an example of how to use it:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s!\n", "world");
    ft_printf("Decimal: %d, Hex: %x, Pointer: %p\n", 42, 42, &main);
    return 0;
}
```

### Example Output:

```yaml
Hello, world!
Decimal: 42, Hex: 2a, Pointer: 0x7f7b9c41d290
```

## Notes
- The function does not handle buffer management, as per the project requirements.
- The implementation was compared against the original `printf()` to ensure the output matches expected results.

## License

This project is subject to the 42 School's License.


