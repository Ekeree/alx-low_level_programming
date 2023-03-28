#include "main.h"
/**
 *  _strlen - returns the string length
 *  @s: string whose length to be printed
 *  Return: 0
 */

int _strlen(char *s)
{
	int a = 0; /*start the counter fro 0*/

	for (; *s++;)
		a++;

	return (a);
}
