#include "main.h"
/**
 * _memset - Entry point
 * @s: destination
 * @b: constant byte
 * @n: bytes
 * Return: 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
