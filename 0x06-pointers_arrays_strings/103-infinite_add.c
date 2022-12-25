#include "main.h"

/**
 * char *infinite_add adds two integers
 * @n1: an input number
 * @n2: an input integer
 * Return: A pointer to the resulting summation
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	char *temp = r;
	*r = *n1 + *n2;
	return (temp);
}
