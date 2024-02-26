#include "main.h"
/**
 * _isdigit - checks if character is a number
 *
 * @c: character to be checked
 *
 * Return: 1 if number, 0 if not
 */
int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
	{
		return (1);
	}
	return (0);
}
