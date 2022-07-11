#include "main.h"

/**
 * int_to_base - This function converts int to any base
 * @num: Number to convert
 * @base: Number base
 *
 * Return: Number of characters printed
 */
int int_to_base(unsigned int num, unsigned int base)
{
	const char *str = "0123456789abcdef";
	char res[65];
	int i = 0;
	int numChar = 0;

	while (num > 0)
	{
		res[i] = str[num % base];
		num = num / base;
		i++;
	}
	res[i] = '\0';

	while (res[i])
		i++;

	i--;
	while (i >= 0)
	{
		numChar += _putchar(res[i]);
		i--;
	}

	return (numChar);
}

/**
 * print_o - This function prints unsigned int in base 8
 * @list: Arguments
 *
 * Return: 1 on  sucess
 */
int print_o(va_list list)
{
	int numChar = 0;

	numChar += int_to_base(va_arg(list, unsigned int), 8);
	return (numChar);
}

/**
 * print_x - This function prints unsigned int in base 16
 * @list: Arguments
 *
 * Return: 1 on  sucess
 */
int print_x(va_list list)
{
	int numChar = 0;

	numChar += int_to_base(va_arg(list, unsigned int), 16);
	return (numChar);
}

/**
 * print_X - This function converts int to any base
 * @list: Arguments
 *
 * Return: Number of characters printed
 */
int print_X(va_list list)
{
	const char *str = "0123456789ABCDEF";
	char res[65];
	int i = 0;
	unsigned int num;
	int numChar = 0;

	num = va_arg(list, unsigned int);
	while (num > 0)
	{
		res[i] = str[num % 16];
		num = num / 16;
		i++;
	}
	res[i] = '\0';

	while (res[i])
		i++;
	i--;
	while (i >= 0)
	{
		numChar += _putchar(res[i]);
		i--;
	}

	return (numChar);
}
