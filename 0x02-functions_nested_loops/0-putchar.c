#include "main.h"

/**
 * main - prints _putchar, followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *var = "_putchar\n";

	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(var[i]);
	}
	return (0);
}
