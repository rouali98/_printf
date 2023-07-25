#include "main.h"

/* BY ROUALI AND MAMAZZAL */

/**
 * checker - function that controle the format commes
 * @s: the string
 * @list: the list of arguments
 * Return: size of arguments plus total size of string
*/

int	checker(const char *s, va_list list)
{
	int	size;
	int	i;
	int	deffer;

	size = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			deffer = check(s, list, &i);
			if (deffer == -1)
				return (-1);
			size += deffer;
			continue;
		}
		_putchar(s[i]);
		size++;
		i++;
	}

	return (size);
}

/* BY ROUALI AND MAMAZZAL */

/**
 * check - function controlls the % elements commes
 * @s: string
 * @list: list of arguments
 * @i: iterator
 * Return: the number of characters printed
*/

int check(const char *s, va_list list, int *i)
{
	int size, y, n_format;
	format formats[] = {
		{'s', _print_string}, {'c', _print_char},
		{'d', _print_int}, {'i', _print_int},
		{'b', _print_bin}, {'o', _print_octal},
		{'x', _print_low_hexa}, {'X', _print_big_hexa},
		{'u', _print_unsigned_int}, {'r', _print_rev_string},
		{'R', _print_rot13}, {'p', _print_pointer},
		{'S', _print_big_s}
	};

	*i = *i + 1;
	if (s[*i] == '\0')
		return (-1);
	if (s[*i] == '%')
	{
		_putchar('%');
		return (1);
	}
	n_format = sizeof(formats) / sizeof(formats[0]);
	size = y = 0;
	while (y < n_format)
	{
		if (s[*i] == formats[y].t)
		{
			size = formats[y].f(list);
			return (size);
		}
		y++;
	}
	_putchar('%'), _putchar(s[*i]);
	return (2);
}
