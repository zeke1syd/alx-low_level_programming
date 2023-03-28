#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	int b = 0;
	int j;

	while (s[b] != '\0')
	{
		_putchar(s[b]);
		b++;
	}
	for (j = b - 1; j <= 10; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
