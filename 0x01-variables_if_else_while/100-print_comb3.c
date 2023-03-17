#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	__uint8_t i, j;

	for (i = 0 ; i < 9 ; i++)
	{
		for (j = i ; j <= 9 ; j++)
		{
			putchar(i);
			putchar(j);
			putchar(',');
			putchar(' ');
		}
		putchar('\n');
	}

	return (0);
}
