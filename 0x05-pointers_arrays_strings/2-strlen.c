#include "main.h"

/**
 *  _strlen - returns the length of a string
 *@s: string
 *Return: 0
 */
int _strlen(char *s)
{
	int b = 0;

	while (s[b] != '\0')
	{
		b++;
	}
	return (b);
}
