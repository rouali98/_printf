# Printf Project

This is a group project for implementing a custom `printf` function with specific requirements. The `printf` function is used to produce output according to a given format. The goal is to handle various conversion specifiers and produce the expected output as described in the tasks below.

> **Created By ROUALI & MAMAZZAL**

## Resources
Please read or watch the following resources before starting the project:

- [Secrets of printf](https://example.com/secrets-of-printf)
- [Group Projects concept page](https://example.com/group-projects)
- [Flowcharts concept page](https://example.com/flowcharts)

## Requirements

### General
- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS using gcc with the following options: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line
- A `README.md` file, at the root of the project folder, is mandatory
- Code should follow the Betty style, which will be checked using `betty-style.pl` and `betty-doc.pl`
- Usage of global variables is not allowed
- Each file should contain no more than 5 functions
- Prototypes of all functions should be included in the `main.h` header file
- Don’t forget to push your header file and include guards in all header files
- You are not allowed to use the standard `printf` function
- There should be one project repository per group. Other members should not fork or clone the project to ensure only one team member has the repository in their GitHub account; otherwise, there's a risk of scoring 0%.

### Compilation
Your code will be compiled this way:

$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c

As a consequence, be careful not to push any C file containing a `main` function in the root directory of your project (you could have a test folder containing all your test files, including main functions). Our main files will include your main header file (`main.h`) using `#include "main.h"`. You might want to look at the gcc flag `-Wno-format` when testing with your `_printf` and the standard `printf`.

### Authorized functions and macros
- `write` (`man 2 write`)
- `malloc` (`man 3 malloc`)
- `free` (`man 3 free`)
- `va_start` (`man 3 va_start`)
- `va_end` (`man 3 va_end`)
- `va_copy` (`man 3 va_copy`)
- `va_arg` (`man 3 va_arg`)

## Tasks

1. **I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life**
   - Write a function `int _printf(const char *format, ...)` that produces output according to a format.

2. **Education is when you read the fine print. Experience is what you get if you don't**
   - Handle the following conversion specifiers: `d` and `i`.

3. **With a face like mine, I do better in print**
   - Handle the following custom conversion specifier: `b`.

4. **What one has not experienced, one will never understand in print**
   - Handle the following conversion specifiers: `u`, `o`, `x`, and `X`.

5. **Nothing in fine print is ever good news**
   - Optimize by using a local buffer of 1024 characters to call write as little as possible.

6. **My weakness is wearing too much leopard print**
   - Handle the following custom conversion specifier: `S`.

7. **How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print**
   - Handle the following conversion specifier: `p`.

8. **The big print gives and the small print takes away**
   - Handle the following flag characters for non-custom conversion specifiers: `+`, `space`, and `#`.

9. **Sarcasm is lost in print**
   - Handle the following length modifiers for non-custom conversion specifiers: `l` and `h`.

10. **Print some money and give it to us for the rain forests**
    - Handle the field width for non-custom conversion specifiers.

11. **The negative is the equivalent of the composer's score, and the print the performance**
    - Handle the precision for non-custom conversion specifiers.

12. **It's depressing when you're still around and your albums are out of print**
    - Handle the `0` flag character for non-custom conversion specifiers.

13. **Every time that I wanted to give up, if I saw an interesting textile, print whatever, suddenly I would see a collection**
    - Handle the `-` flag character for non-custom conversion specifiers.

14. **Print is the sharpest and the strongest weapon of our party**
    - Handle the following custom conversion specifier: `r`.

15. **The flood of print has turned reading into a process of gulping rather than savoring**
    - Handle the following custom conversion specifier: `R`.

16. **All the above options work well together**

## GitHub Repository
For this project, there should be one project repository per group. Please make sure to follow the guidelines provided and collaborate effectively on the tasks.

Remember, plagiarism is strictly forbidden and will result in removal from the program. Please come up with your own solutions to meet the learning objectives of the project. Happy coding!
