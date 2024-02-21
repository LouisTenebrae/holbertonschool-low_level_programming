#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet ten times
 *Return: void
 */

void print_alphabet_x10(void)
{
	char alpha;
	int num = 0;

	while (num <= 9)
	{
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
	_putchar(alpha);
	}
	_putchar('\n');
	num++;
	}
}
