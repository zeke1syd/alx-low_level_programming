#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 *
 * Return: 0
 */
int main(void)
{
	int c, d;

	srand(time(NULL));
	d = 0;
	while (d <= 2645)
	{
		c = (rand() % 128);
		d += c;
		printf("%c", d);
	}
	printf("%c",2772 - c);

	return (0);
}
