#include "main.h"

/**
 * _printf - This function works like printf
 * @format: Format string
 *
 * Return: Number of printed characters
 */
int _printf(const char *format, ...)
{
	int (*print)(va_list list);
	int numChar = 0;
	int res = 0;
	va_list list;

	if (!format)
		return (-1);
	va_start(list, format);
	while (*format)
	{
		if (*format != '%')
		{
			numChar += _putchar(*format);
			format++;
			continue;
		}

		if (*format == '%')
		{
			format++;
			print = specifier(*format);
			if (print == NULL)
			{
				format++;
				continue;
			}
		}
		res = print(list);
		if (res == -1)
			return (-1);
		numChar += res;
		format++;
	}
	va_end(list);
	return (numChar);
}
