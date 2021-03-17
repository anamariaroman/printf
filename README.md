0x11. C - printf
Low-level programming & Algorithms
Authors: Carolina Ramon and Ana Maria Roman

Based on the "Secrets of printf"

Requirements
Authorized functions and macros:

write (man 2 write)
malloc (man 3 malloc)
free (man 3 free)
va_start (man 3 va_start)
va_end (man 3 va_end)
va_copy (man 3 va_copy)
va_arg (man 3 va_arg)
If the task does not specify what to do with an edge case, do the same as printf

The main.c file is shown as example and for the test purpose

Style guides
Allowed editors: vi, vim, emacs
All files should end with a new line
The code should use the Betty style
Global variables are not allowed
No more than 5 functions per file

Headers

The prototypes of all functions should be included in header file called holberton.h
All header files should be include guarded

Compilation

All files will be compiled on Ubuntu 14.04 LTS
Programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
code will be compiled this way: gcc -Wall -Werror -Wextra -pedantic \*.c

Example
#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/\*\*

- main - Entry point
-
- Return: Always 0
  \*/
  int main(void)
  {
  int len;
  int len2;

len = \_printf("Let's try to printf a simple sentence.\n");
print the string "Let's try to printf a simple sentence.

\_printf("Negative:[%d]\n", -762534);
print the negative number -762534.

\_printf("Character:[%c]\n", 'H');
print the char H.

    return (0);

}
