#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int c, s;

	if (size > 0)
	{
		for (c = 1; c <= size; c++)
		{
			for (s = 1; s <= size; s++)
			{
				if (s <= size - c)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
