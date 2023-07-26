#include "main.h"

/* BY ROUALI AND MAMAZZAL */

/**
 * _strlen - Calculate the len of a string
 * @s: string
 *
 * Return: len
**/

int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/* BY ROUALI AND MAMAZZAL */

/**
 * print - print char
 * @s: string
 *
 * Return: String len
*/

int print(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}

/* BY ROUALI AND MAMAZZAL */

/**
 * _put_string - function print string
 *
 * @str: string
 *
 * Return: i
*/

int _put_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return i;
}

/* BY ROUALI AND MAMAZZAL */

/**
 * _is_lower - funct check if is lower case or not
 *
 * @c: char
 *
 * Return: 1 or 0
*/

int _is_lower(char c)
{
	return (c >= 'a' && c <= 'z');
}

/* BY ROUALI AND MAMAZZAL */

/**
 * *_to_upper - funct make change string to upper case
 *
 * @s: string
 *
 * Return: uppercase string
 */

char *_to_upper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (_is_lower(s[i]))
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
