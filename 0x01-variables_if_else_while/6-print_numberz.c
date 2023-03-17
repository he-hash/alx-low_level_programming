#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	__uint8_t c;

	for (c = 48; c <= 57; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
