#include "main.h"

/* BY ROUALI AND MAMAZZAL */

/**
 * _print_rev_string - function reverse string %r
 *
 * @list: list
 *
 * Return: c wish containes string len
**/

int _print_rev_string(va_list list)
{
	int i, c;
	char *p;

	p = va_arg(list, char *);
	c = _strlen(p);
	i = c - 1;
	while (i >= 0)
		_putchar(p[i--]);
	return (c);
}
