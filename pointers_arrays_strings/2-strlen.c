#include <stddef.h>
#include "main.h"
/**
 *_strlen - string length
 *
 *@str: string
 *
 * Return: Length of str
 */
int _strlen(char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
