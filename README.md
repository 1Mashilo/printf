# Printf()

The `printf` project is a collaboration project by Denis Rands and Mashilo Kgaladi, students of the ALX Software Engineering Programme by Holberton School. This project involves creating a custom `printf` function that imitates the functionality of the standard `printf` function located in the `stdio.h` library. It contains some of the basic features and functions found in the manual 3 of `printf`.

## Function Description

The `_printf()` function is designed to perform formatted output conversion and print data. Its prototype is as follows:

```c
int _printf(const char *format, ...)
format is a string that contains the format specification.
_printf() is a variadic function, meaning it can receive any number of arguments that replace the format tags written inside the string.
The format tag has the following prototype:


%c: Character
%d or %i: Signed decimal integer
%s: String of characters
%b: Signed binary
%o: Signed octal
%u: Unsigned integer
%x: Unsigned hexadecimal
%X: Unsigned hexadecimal (uppercase)
%p: Pointer address
%r: Reverse string of characters
%R: ROT13 translation of a string
%S: String with special characters replaced by their ASCII value
%%: Character
Flags and Specifiers
+: Prints a plus sign (+) when the argument is a positive number for %i and %d.
(space): Prints a blank space if the argument is a positive number for %i and %d.
#: Prints 0, 0x, and 0X for %o, %x, and %X specifiers, respectively. It doesn't print anything if the argument is zero for %o, %x, %X.
Length Specifiers
l: Prints a long int or unsigned long int for %i, %d, %o, %u, %x, and %X.
h: Prints a short int or unsigned short int for %i, %d, %o, %u, %x, and %X.

Authors
Mashilo Kgaladi 
Denis Rands
