#include "main.h"
/**
 * factorial - Calculate fact of a number
 * @n: number to calculate
 * Return: interger value
 */
int factorial(int n)
{
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
