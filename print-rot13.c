#include "main.h"

/**
 * print_R - prints a string in rot13
 * @R: string to print
 *
 * Return: number of chars printed
 */
int print_R(va_list R, ...)
{
	char *str;
	unsigned int i, j;
	int count = 0;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(R, char *);
	if (str == NULL)
		str = "(ahyy)";
	for (i = 0; str[i]; i++)
	{
		for (j = 0; in[j]; j++)
		{
			if (in[j] == str[i])
			{
				_putchar(out[j]);
				count++;
				break;
			}
		}
		if (!in[j])
		{
			_putchar(str[i]);
			count++;
		}
	}
	return (count);
}

/**
 * print_r - This function prints string in reverse
 * @list: Arguments
 *
 * Return: number of characters printed
 */
int print_r(va_list list, ...)
{
	int i = 0;
	int numChar = 0;
	char *str = va_arg(list, char *);

	if (!str)
	{
		numChar += _printf("(null)");
		return (numChar);
	}
	while (str[i])
		i++;

	i--;
	while (i >= 0)
	{
		numChar += _putchar(str[i]);
		i--;
	}
	return (numChar);
}

/**
 * print_spe - This function handles format specifier for integers
 * @spe: format
 * @num: Integer
 *
 * Return number of characters printed
 */
int print_spe(char *spe, int num)
{
	int k = 0;
	int numChar = 0;

	while (spe[k])
	{
		if (spe[k] == '+')
		{
			if (num >= 0)
				numChar += _putchar('+');
		}
		if (spe[k] == ' ')
		{
			if (num >= 0)
				numChar += _putchar(' ');
		}
		k++;
	}
	return (numChar);
}
