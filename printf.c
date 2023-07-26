#include "main.h"

/* BY ROUALI AND MAMAZZAL */

/**
 * _printf - our printf version for alx PLD
 * @format: format
 * Return: size_f
 */

int _printf(const char *format, ...)
{
	int size_f = 0;
	va_list list;

	if (format == NULL)
	{
		return (-1);
	}
	size_f = _strlen(format);
	if (size_f <= 0)
		return (0);
	va_start(list, format);
	size_f = checker(format, list);
	_putchar(-1);
	va_end(list);
	return (size_f);
}
