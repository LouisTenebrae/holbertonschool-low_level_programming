#include "main.h"
#include <ctype.h>
/**
 * _islower - Checks for lowercase character
 * @c: The character to be checked
 * Return: 1 if character is lowercase or 0 if else
 */
int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
