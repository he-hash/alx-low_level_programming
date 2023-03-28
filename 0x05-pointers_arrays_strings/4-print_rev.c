#include "main.h"
#include "string.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to be printed
 * Return: void
 */

void print_rev(char *s)
{
	int i = strlen(s);

	while (i > 0)
	{
		_putchar(s[i - 1]);
		i--;
	}
	_putchar('\n');
}
