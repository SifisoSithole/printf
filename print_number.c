#include "main.h"
#include <stdio.h>
/**
 * _strlen - This function returns the length of a string
 *
 * @s: String to be counted
 *
 * Return: The number of characters in s
 **/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * print_numbr - function
 * @n: parameter
 *
 * Return: Number of characters
 */
int print_numbr(int n, int num)
{
	char str[65];
	int i = 0;

	while (n / 10)
	{
		str[i] = ((n % 10) + '0');
		n = n / 10;
		i++;
	}
	str[i] = n + '0';
	i = _strlen(str) - 1;
	while (i >= 0)
	{
		num += _putchar(str[i]);
		i--;
	}

	return (num);
}

/**
 * print_number - Function
 * @n: argument
 */
int print_num(va_list list)
{
	int n = va_arg(list, int);
	int num = 0;
	if (n < 0)
	{
		num += _putchar('-');
		n = n * -1;
	}

	if (n == 0)
	{
		num += _putchar('0');
		return (num);
	}

	num = print_numbr(n, num);

	return (num);
}
