#include "main.h"
/**
*_printf - Printf function
*@format: format.
*return: no bytes.
*/
int _printf(const char *format, ...)
{
int no_char = 0;
va_list argument_list;
if (format == NULL)
return (-1);
va_start(argument_list, format);
while (*format)
{
if (*format != '%')
{
write(1, format, 1);
no_char++;
}
else
{ format++;
if (*format == '\0')
break;
if (*format == '%')
{
write(1, format, 1);
no_char++; }
else if (*format == 'c')
{
char c = va_arg(argument_list, int);
write(1, &c, 1);
no_char++;
}
else if (*format == 's')
{
char *str = va_arg(argument_list, char*);
int str_len = 0;
while (str[str_len] != '\0')
str_len++;
write(1, str, str_len);
no_char += str_len;
}
}
format++;
}
va_end(argument_list);
return (no_char);
}
