#include "main.h"
/**
 * print_most_numbers - prints numbers for 1-9, except 2/4.
 *
 * Return: Numbers
 *
 */
void print_most_numbers(void)
{
	int num = 0;

	for (; num <= 9; num++)
	{
		if (num == 2 || num == 4)
	{
			continue;
	}
		else
	{
		_putchar(num + '0');
	}
	}
	_putchar('\n');
}
