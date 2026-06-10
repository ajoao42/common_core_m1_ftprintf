*This project has been created as part of the 42 curriculum by ajoao.*

# Description

The **Libft** project consists on structuring a library with basic C library functions built from the start to be used for other projects. This library contains functions associated with string, memory, data and file manipulation, and an added list of functions used to operate with nodes and linked lists.

The main goal of this project is to deepen knowledge about:

* memory manipulation;
* strings;
* pointers;
* dynamic memory allocation;
* linked lists;
* modular code organization in C.

All implemented functions are compiled into a static library:

```bash
libft.a
```

This library can later be reused in other C projects.

---

# Resources

The library includes implementations of functions related to:

* character manipulation;
* string manipulation;
* memory manipulation;
* type conversion;
* file management;
* utility functions;
* linked lists.

Examples:

* `ft_strlen`
* `ft_strdup`
* `ft_memcpy`
* `ft_split`
* `ft_itoa`
* `ft_strtrim`
* `ft_lstnew`
* `ft_lstadd_back`

---

## Project Structure

| File       | Description                                           |
| ---------- | ----------------------------------------------------- |
| `libft.h`  | Contains function prototypes and required definitions |
| `Makefile` | Automates the compilation of the library              |
| `*.c`      | Implementation of the Libft functions                 |

---

# Additional Section

## Requirements

* GCC
* Make
* Linux/Ubuntu (recommended)
* VS Code or another code editor

---

## Compile the Library

In the terminal, inside the project folder:

```bash
make
```

This command will:

* compile the `.c` files;
* generate the `.o` object files;
* create the static library:

```bash
libft.a
```

---

## Available Commands

```bash
make        # compile the library
make clean  # remove .o files
make fclean # remove .o files and libft.a
make re     # recompile everything
```

---

## Usage

To use the library in another project:

```bash
gcc main.c -L. -lft
```

Or include it directly in your code:

```c
#include "libft.h"
```

---

## Resources Used

During the development of this project, the following resources were used:

* official Libft subject;
* C language manual (`man`);
* C language documentation and theoretical references;
* `libftTester` for validation and testing;
* structural and syntactic analysis tools for code review.

---

## Learning Objectives

This project helped develop knowledge about:

* the internal workings of `libc`;
* manual memory management;
* pointers and arrays;
* modularization;
* creating static libraries;
* good programming practices in C.

---

## Author

António de Araujo João
42 School Student / ajoao
GitHub: @ajoao42
