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

	while (*str)
	{
		numChar += _putchar(*str);
		str++;
	}
	return (numChar);
}
