#include "main.h"

/**
 * print_char - This function prints a character
 * @list: Arguments
 *
 * Return: 1 on sucess
 */
int print_char(va_list list)
{
	char c = va_arg(list, int);

	if (c)
		return (_putchar(c));
	else
		return (-1);
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
	char *str = va_arg(list, char *);

	if (!str)
		return (-1);

	while (*str)
	{
		numChar += _putchar(*str);
		str++;
	}
	return (numChar);
}
