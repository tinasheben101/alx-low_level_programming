#include "main.h"
/**
 * int factorial(int n) - a function that returns the factorial of a given number.
 * @n: an input to integer for the factorial function
 * Return: -1 if n is less than 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
		
