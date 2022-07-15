#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
/**
 * struct t - Struct t
 *
 * @c: Character
 * @f: Function associated
 */
typedef struct t
{
	char c;
	int (*f)(va_list list, ...);
} data_t;

int _printf(const char *format, ...);

int _putchar(char c);

int (*specifier(char c))(va_list list, ...);

int print_char(va_list list, ...);

int print_per(va_list list, ...);

int print_str(va_list list, ...);

int print_num(va_list list, ...);

int print_spe(char *spe, int num);

int int_to_base(unsigned int num, unsigned int base);

int print_b(va_list list, ...);

int print_unum(va_list list, ...);

int print_o(va_list list, ...);

int print_x(va_list list, ...);

int print_X(va_list list, ...);

int print_S(va_list list, ...);

int print_p(va_list list, ...);

int print_R(va_list list, ...);

int print_r(va_list list, ...);

#endif /* MAIN_H */
