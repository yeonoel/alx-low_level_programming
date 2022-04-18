0x11. C - printf

____________________________________________________________________________________________________________

Write a function that produces output according to a format.

Prototype: int _printf(const char *format, ...);
Returns: the number of characters printed (excluding the null byte used to end output to strings)
write output to stdout, the standard output stream
format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
c
s
%
You don’t have to reproduce the buffer handling of the C library printf function
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers
________________________________________________________________________________________________________

Handle the following conversion specifiers:

d
i
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers

_____________________________________________________________________________________________________


Create a man page for your function.

_______________________________________________________________________________________


int _printf(const char *format, ...);
int _write(char c);
int _print_a_char(va_list args);
int _print_a_string(va_list args);
int _print_format(const char *format, va_list args);
int _print_spec(char formaty, va_list args);
int _print_a_integer(va_list args);
int _print_int_binary(va_list args);
int _print_invalid_spec(char prev_format, char format, int count);
int _validate_char(char _type);
void _recursion_int_binary(int a);
void _recursion_integer(int a);
