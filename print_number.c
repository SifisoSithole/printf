#include "main.h"

/**
 * print_numbr - function
 * @n: parameter
 *
 * Return: Number of characters
 */
int print_numbr(int n, int num)
{
	if (n / 10)
		print_numbr(n / 10, num);

	num += _putchar((n % 10) + '0');

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
