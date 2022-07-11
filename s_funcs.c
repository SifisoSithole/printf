#include "main.h"

/**
 * print_char - This function prints a character
 * @list: Arguments
 *
 * Return: 1 on sucess
 */
int print_char(va_list list)
{
	return (_putchar(va_arg(list, int)));
}

int print_per(va_list list)
{
	va_arg(list, int);
	return (_putchar('%'));
}


/**
 * print_str - This function print string
 * @list: List of arguments
 *
 * Return: Number of characters printed
 */
int print_str(va_list list)
{
	int numChar = 0;
	char *str1 = "(null)";
	char *str = va_arg(list, char *);

	if (str)
	{
		while (*str)
		{
			numChar += _putchar(*str);
			str++;
		}
	}
	else
	{
		while (*str1)
		{
			numChar += _putchar(*str1);
			str1++;
		}
	}
	return (numChar);
}
