#include "main.h"

/**
 * puts2 - function should print only one character of two
 * starting with the first one
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
	int longi = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	for (o = 0 ; o <= 0; o++)
	{
		if (0 % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}
