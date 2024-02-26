#include "main.h"
/**
 * _isupper - checks for uppercase characters.
 *
 * @c: character to be revised.
 *
 * Return: 1 if uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (c <= 90 && c >= 65)
	{
		return (1);
	}
	return (0);
}
