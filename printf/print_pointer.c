#include "main.h"

/* BY ROUALI AND MAMAZZAL */
/**
 * _strcmp - funct make change string to upper case
 *
 * @s1: string
 * @s2: string
 *
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ( s1[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/* BY ROUALI AND MAMAZZAL */

/**
 * _print_pointer - function that print adresse
 *
 * @list: list
 *
 * Return: string len
 */

int _print_pointer(va_list list)
{
	char *p;
	int c;

	p = _magic(va_arg(list, unsigned long int), 16);
	if (!_strcmp(p, "0"))
		return (print("(nil)"));
	c = print("0x");
	if (!_strcmp(p, "-1"))
		c += print("ffffffffffffffff");
	else
		c += print(p);
	return (c);
}


