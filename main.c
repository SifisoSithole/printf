#include "main.h"
#include <stdio.h>

int main(void)
{
	int num = 0;

	num += _printf("Let's try to printf %a simple sentence.\n");
	printf("%d\n", num);
	return (0);
}
