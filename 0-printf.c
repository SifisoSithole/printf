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
				return (-1);
		}

		numChar += print(list);
		format++;
	}
	va_end(list);
	return (numChar);
}
