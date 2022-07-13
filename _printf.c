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

	if (!format || (format[0] == '\0') || (format[0] == '%' && format[1] == '\0'))
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
			if (*format == '%')
			{
				numChar += _putchar('%');
				format++;
				continue;
			}
			else
				print = specifier(*format);
			if (print == NULL)
			{
				numChar += _putchar('%');
				numChar += _putchar(*format);
			}
			else
				numChar += print(list);
		}
		format++;
	}
	va_end(list);
	return (numChar);
}
