#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int				len;
	int				len2;
	unsigned int	size;
	void *address;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	size = (unsigned int)INT_MAX + 1024;
	address = (void *)0x7ffe637541f0;
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Unsigned:[%u]\n", size);
	printf("Unsigned:[%u]\n", size);
	_printf("Unsigned octal:[%o]\n", size);
	printf("Unsigned octal:[%o]\n", size);
	_printf("Unsigned hexadecimal:[%x, %X]\n", size, size);
	printf("Unsigned hexadecimal:[%x, %X]\n", size, size);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Address:[%p]\n", address);
	printf("Address:[%p]\n", address);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("%S\n", "Best\nSchool");
	_printf("%R\n", "noqrytuav");
	return (0);
}
