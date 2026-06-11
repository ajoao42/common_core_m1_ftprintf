# *This project has been created as part of the 42 curriculum by ajoao.*

## Description

The **ft_printf** project consists of recreating the behavior of the standard C `printf()` function. The objective is to build a custom formatted output function capable of handling multiple conversion specifiers while learning how variadic functions work internally.

This project provides a deeper understanding of:

* variadic functions (`stdarg.h`);
* formatted output processing;
* string manipulation;
* number conversion algorithms;
* memory management;
* modular programming in C;
* code organization and maintainability.

The final result is a static library containing a custom implementation of `printf`, named:

```bash
libftprintf.a
```

This library can be reused in future C projects whenever formatted output is required.


---
### Features

The mandatory implementation supports the following conversion specifiers:

| Specifier | Description              |
| --------- | ------------------------ |
| `%c`      | Character                |
| `%s`      | String                   |
| `%p`      | Pointer address          |
| `%d`      | Signed decimal integer   |
| `%i`      | Integer                  |
| `%u`      | Unsigned decimal integer |
| `%x`      | Lowercase hexadecimal    |
| `%X`      | Uppercase hexadecimal    |
| `%%`      | Percent sign             |

The bonus part was not implemented.

---
### Project Structure

| File                | Description                         |
| ------------------- | ----------------------------------- |
| `ft_printf.c`       | Main printf function                |
| `ft_printf.h`       | Function prototypes and definitions |
| `Makefile`          | Project compilation                 |
| `*.c`               | Conversion and printing functions   |

Example structure:

```text
ft_printf/
├── ft_printf.c
├── libft.a
├── libft.h
├── ft_printf.h
├── ft_print_chr.c
├── ft_print_str.c
├── ft_print_int.c
├── ft_print_hex.c
├── ft_print_ptr.c
└── Makefile
```

---


## Instructions

### Requirements

* GCC
* Make
* Linux (recommended)
* Standard C library
* 42 Norm compliant code

### Compilation

Inside the project directory run:

```bash
make
```

This command:

* compiles all source files;
* generates object files;
* creates the static library:

```bash
libftprintf.a
```

### Available Commands

```bash
make        # compile project
make clean  # remove object files
make fclean # remove object files and library
make re     # rebuild project
```

---

### Usage

Include the header:

```c
#include "ft_printf.h"
```

Compile your program:

```bash
gcc main.c libftprintf.a
```

Example:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s!\n", "World");
    ft_printf("Number: %d\n", 42);
    ft_printf("Hex: %x\n", 255);
    return (0);
}
```

Output:

```text
Hello World!
Number: 42
Hex: ff
```

---

### Testing

The project can be tested by comparing outputs with the original `printf()`.

Common test cases include:

* characters;
* strings;
* integers;
* negative numbers;
* unsigned values;
* hexadecimal conversions;
* pointers;
* edge cases (`NULL`, `0`, empty strings).

---

## Resources

### Documentation and References

* 42 ft_printf subject
* C Standard Library documentation
* Linux manual pages (`man printf`)
* `man stdarg`
* GNU C Documentation
* cppreference.com
* The C Programming Language — Brian Kernighan & Dennis Ritchie

## AI Usage

Artificial Intelligence tools were used exclusively as learning and documentation aids.

AI assistance was used for:

* understanding variadic functions;
* clarifying formatting behavior;
* improving code documentation;
* reviewing README structure and wording;
* explaining algorithms and complexity analysis.

All project code, implementation decisions, debugging, testing, and final validation were completed manually by the author.

---

## Algorithm and Data Structure Choices

#### Overall Algorithm

The implementation follows a **linear parsing algorithm**.

1. Traverse the format string character by character.
2. If the current character is not `%`, print it directly and increment the printed character count.
3. If `%` is found:

   * move to the next character;
   * identify the conversion specifier;
   * retrieve the corresponding argument using `va_arg`;
   * call the appropriate conversion function;
   * print the result and update the character count.
4. Continue until the end of the format string.
5. Return the total number of printed characters.

#### Why This Algorithm?

A linear parser was chosen because:

* it mirrors the behavior of the original `printf`;
* it provides O(n) complexity relative to the format string length;
* it keeps the implementation modular and easy to maintain;
* each conversion specifier can be implemented independently.

### Data Structures Used

The project intentionally uses very simple data structures:

#### Character Arrays (Strings)

Used for:

* traversing the format string;
* printing strings;
* storing temporary converted numbers.

This choice minimizes memory overhead and remains consistent with the C standard library philosophy.

#### Variadic Argument List

The `va_list` structure from `stdarg.h` is the core data structure of the project.

Functions used:

```c
va_start()
va_arg()
va_end()
```

It allows access to an unknown number of function arguments at runtime.

#### Number Conversion Strategy

For decimal and hexadecimal conversions, recursive or iterative division algorithms are commonly used.

Example for hexadecimal conversion:

1. Divide the number by 16.
2. Recursively process the quotient.
3. Print the corresponding hexadecimal digit of the remainder.

This approach naturally prints digits in the correct order without requiring additional data structures such as stacks or linked lists.

## Complexity Analysis

| Operation              | Complexity |
| ---------------------- | ---------- |
| Parsing format string  | O(n)       |
| Printing strings       | O(m)       |
| Decimal conversion     | O(log n)   |
| Hexadecimal conversion | O(log₁₆ n) |

Where:

* `n` = length of format string;
* `m` = length of printed string.

---
## Learning Objectives

This project helped develop knowledge about:

* variadic functions;
* low-level formatted output;
* parsing techniques;
* recursive number conversion;
* hexadecimal representation;
* memory management;
* modular code design;
* recreation of standard library functionality.

---

## Author

*Antonio de Araujo Joao *ajoao42**

42 School Student
```text
ft_printf/
├── ft_printf.c
├── libft.a
├── libft.h
├── ft_printf.h
├── ft_print_chr.c
├── ft_print_str.c
├── ft_print_int.c
├── ft_print_hex.c
├── ft_print_ptr.c
└── Makefile
```

---

### Algorithm and Data Structure Choices

#### Overall Algorithm

The implementation follows a **linear parsing algorithm**.

1. Traverse the format string character by character.
2. If the current character is not `%`, print it directly and increment the printed character count.
3. If `%` is found:

   * move to the next character;
   * identify the conversion specifier;
   * retrieve the corresponding argument using `va_arg`;
   * call the appropriate conversion function;
   * print the result and update the character count.
4. Continue until the end of the format string.
5. Return the total number of printed characters.

#### Why This Algorithm?

A linear parser was chosen because:

* it mirrors the behavior of the original `printf`;
* it provides O(n) complexity relative to the format string length;
* it keeps the implementation modular and easy to maintain;
* each conversion specifier can be implemented independently.

### Data Structures Used

The project intentionally uses very simple data structures:

#### Character Arrays (Strings)

Used for:

* traversing the format string;
* printing strings;
* storing temporary converted numbers.

This choice minimizes memory overhead and remains consistent with the C standard library philosophy.

#### Variadic Argument List

The `va_list` structure from `stdarg.h` is the core data structure of the project.

Functions used:

```c
va_start()
va_arg()
va_end()
```

It allows access to an unknown number of function arguments at runtime.

### Number Conversion Strategy

For decimal and hexadecimal conversions, recursive or iterative division algorithms are commonly used.

Example for hexadecimal conversion:

1. Divide the number by 16.
2. Recursively process the quotient.
3. Print the corresponding hexadecimal digit of the remainder.

This approach naturally prints digits in the correct order without requiring additional data structures such as stacks or linked lists.

#### Complexity Analysis

| Operation              | Complexity |
| ---------------------- | ---------- |
| Parsing format string  | O(n)       |
| Printing strings       | O(m)       |
| Decimal conversion     | O(log n)   |
| Hexadecimal conversion | O(log₁₆ n) |

Where:

* `n` = length of format string;
* `m` = length of printed string.

---

## Instructions

### Requirements

* GCC
* Make
* Linux (recommended)
* Standard C library
* 42 Norm compliant code

### Compilation

Inside the project directory run:

```bash
make
```

This command:

* compiles all source files;
* generates object files;
* creates the static library:

```bash
libftprintf.a
```

### Available Commands

```bash
make        # compile project
make clean  # remove object files
make fclean # remove object files and library
make re     # rebuild project
```

---

### Usage

Include the header:

```c
#include "ft_printf.h"
```

Compile your program:

```bash
gcc main.c libftprintf.a
```

Example:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s!\n", "World");
    ft_printf("Number: %d\n", 42);
    ft_printf("Hex: %x\n", 255);
    return (0);
}
```

Output:

```text
Hello World!
Number: 42
Hex: ff
```

---

### Testing

The project can be tested by comparing outputs with the original `printf()`.

Common test cases include:

* characters;
* strings;
* integers;
* negative numbers;
* unsigned values;
* hexadecimal conversions;
* pointers;
* edge cases (`NULL`, `0`, empty strings).

---

## Resources

### Documentation and References

* 42 ft_printf subject
* C Standard Library documentation
* Linux manual pages (`man printf`)
* `man stdarg`
* GNU C Documentation
* cppreference.com
* The C Programming Language — Brian Kernighan & Dennis Ritchie

### AI Usage

Artificial Intelligence tools were used exclusively as learning and documentation aids.

AI assistance was used for:

* understanding variadic functions;
* clarifying formatting behavior;
* improving code documentation;
* reviewing README structure and wording;
* explaining algorithms and complexity analysis.

All project code, implementation decisions, debugging, testing, and final validation were completed manually by the author.

---

## Learning Objectives

This project helped develop knowledge about:

* variadic functions;
* low-level formatted output;
* parsing techniques;
* recursive number conversion;
* hexadecimal representation;
* memory management;
* modular code design;
* recreation of standard library functionality.

---

## Author

*Antonio de Araujo Joao *ajoao42**

42 School Student
