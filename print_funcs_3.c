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
