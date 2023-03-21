#include "main.h"

/**
 * main - prints _putchar, followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *var = "_putchar";

	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(var[i]);
	}
	_putchar('\n');
	return (0);
}
