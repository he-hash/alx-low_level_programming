#include <stdio.h>
#include <string.h>
/**
 * main - Prints a string fwrite
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *message = "and that piece of art is useful\" - Dora Korpar,2015-10-19";

	size_t len = strlen(message);

	fwrite(message, sizeof(char), len, stderr);
	return (0);
}
