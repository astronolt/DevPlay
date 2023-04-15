# GCC (GNU Compiler Collection) README

GCC is a software program that helps turn human-written code into a program that a computer can understand and run. It's like a machine that takes your code and turns it into a program.

## GCC Options

GCC provides a wide range of options that can be used to control the compilation process and customize the behavior of the compiler. Here are some commonly used GCC options:

- `-o <file>`: Specifies the output file name.
- `-c`: Compiles the source file(s) without linking.
- `-Wall`: Enables a set of warning options.
- `-g`: Generates debug information in the output file.
- `-I <dir>`: Adds a directory to the include path.
- `-L <dir>`: Adds a directory to the library search path.
- `-D <macro>`: Defines a macro during compilation.
- `-std=<standard>`: Specifies the C language standard to be used for compilation.
- `-march=<arch>`: Specifies the target architecture for code generation.
- `-O<level>`: Specifies the level of optimization to be applied during compilation.

These are just a few examples of the many options that GCC provides. You can find more information about GCC options in the GCC documentation or by running `gcc --help` in a terminal.

## Example Code

Here's an example of a simple "Hello, world!" program in C language that can be compiled using GCC:

```c
#include <stdio.h>

int main() {
  printf("Hello, world!\n");
    return 0;
    }
```
