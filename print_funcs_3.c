#include "main.h"

/**
 * print_b - This function converts int to binary
 * @list: Arguments
 *
 * Return: Number of characters printed
 */
int print_b(va_list list)
{
	int numChar = 0;
	unsigned int num = va_arg(list, unsigned int);

	numChar += int_to_base(num, 2);
	return (numChar);
}

/**
 * print_p - This function prints memory address
 * @list: Arguments
 *
 * Return: Number of characters printed
 */
int print_p(va_list list)
{
	int numChar = 0;
	int res[64];
	int i = 0;
	unsigned long num = (unsigned long) va_arg(list, void *);

	if (num)
	{
		numChar += _printf("0x");
		while (num > 0)
		{
			res[i] = num % 16;
			num = num / 16;
			i++;
		}
		while (i >= 0)
		{
			if (res[i] >= 10)
				numChar += _putchar(res[i] + 87);
			else
				numChar += _putchar(res[i] + '0');
			i--;
		}
	}
	else
		numChar += _printf("(null)");

	return (numChar);
}
