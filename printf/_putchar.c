#include "main.h"

/* BY ROUALI AND MAMAZZAL */

/**
 * _putchar - stdout the char via write
 * @c: char to print
 * Return: 1 if (Success) and -1 if (UnSuccess)
 **/

int _putchar(char c)
{
	return (buffer(c));
}
/* BY ROUALI AND MAMAZZAL */

/**
 * buffer - stdout the char via write
 * @c: char to print
 * Return: 1 if (Success) and -1 if (UnSuccess)
**/

int	buffer(char c)
{
	static char	buff[BUFFER_SIZE];
	static int	i;

	if (c == -1 || i == BUFFER_SIZE)
	{
		write(1, buff, i);
		i = 0;
	}

	if (c != -1)
	{
		buff[i++] = c;
	}

	return (1);
}
