#include "main.h"

/**
 * format_spe - This function handles format specifications
 * @c: format specifier
 * @i: Index of the array
 * @spe: Array of specifiers
 */
int format_spe(char c, int i, char *spe)
{
	spe[i] = c;
	return (1);
}

/**
 * _printf - This function works like printf
 * @format: Format string
 *
 * Return: Number of printed characters
 */
int _printf(const char *format, ...)
{
	int (*print)(va_list list, ...);
	int numChar = 0;
	int i = 0;
	char formatSpe[4];
	va_list list;

	if (!format || (format[0] == '\0') || (format[0] == '%' && format[1] == '\0'))
		return (0);
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
			while (*format == ' ' || *format == '#' || *format == '+')
			{
				if (*format == ' ' || *format == '#' || *format == '+')
				{
					i += format_spe(*format, i, formatSpe);
					format++;
				}
			}
			formatSpe[i] = '\0';
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
				numChar += print(list, formatSpe);
		}
		format++;
	}
	va_end(list);
	return (numChar);
}
