#include "main.h"
/**
 * _isalpha - Checks if character is a letter
 * @c: Character to be checked
 * Return: 1 if character is a letter, 0 if otherwise
 */
int _isalpha(int c)

{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
