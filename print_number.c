#include "main.h"

/**
 * print_num - this function print integers
 * @list: list of arguments
 * 
 * 
 * Return: number of numbers printed
 */
int print_num(va_list list)
{
	int  k;
	int num; 
	int l; 
	int numInt = 0;

	k = 1;
	num = va_arg(list, int);
	l = num;
	if (num < 0)
	{
		k = k * -1;
		numInt += _putchar('-');
	}
	while (l > 9 || l < -9)
	{
		l = l / 10;
		k = k * 10;
	}

	while (k > 9 || k < -9)
	{
		numInt += _putchar((num / k) % 10 + '0');
		k = k / 10;
	}
	if (num < 0)
		numInt += _putchar((num % 10)  * -1 + '0');
	else
		numInt += _putchar((num % 10) + '0');
	return (numInt);
}
