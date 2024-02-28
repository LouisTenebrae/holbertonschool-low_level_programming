#include "main.h"
/**
 * swap_int - Swaps values of 2 intergers
 *@a: first int
 *@b: second int
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
