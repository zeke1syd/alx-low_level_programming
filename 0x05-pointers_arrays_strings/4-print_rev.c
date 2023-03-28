#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: string
 * Return: void
 */
void print_rev(char *s)
{
	int b = 0;
	int j;

	while (s[b] != '\0')
	{
		b++;
	}
	for (j = b - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
