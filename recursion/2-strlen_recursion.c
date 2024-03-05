#include "main.h"
#include <stddef.h>
/**
 *
 */
int _strlen_recursion(char *s)
{
	size_t length = 0;

	while (*s++)
		length++;
	return(length);
}
