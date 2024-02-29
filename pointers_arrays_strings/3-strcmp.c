#include "main.h"
/**
 * _strcmp - Compares pointers to 2 strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * Return: If str1<str2, the negative difference of the 1st unmatched
 * characters
 * If str1 == str2, 0.
 * If str1 > str2, the positive difference of the first unmatched characters.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
