#include "main.h"
/**
 * string_toupper - Changes lowercase letters to uppercase
 * @str: String to be changed
 * Return: Pointer to the changed string
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
		index++;
	}
	return (str);
}
