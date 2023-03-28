#include "main.h"

/**
 * _puts -  prints a string
 * @str: string
 * Return: void
 */
void _puts(char *str)
{
	int b = 0;

	while (str[b] != '\0')
	{
		_putchar(str[b]);
		b++;
	}
	_putchar('\n');
}
