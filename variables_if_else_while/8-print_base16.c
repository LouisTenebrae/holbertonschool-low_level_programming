#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;

	for (x = 0; x < 16; x++)
	{
		putchar(x + '0');
	}
	putchar('\n');
	return (0);
}
