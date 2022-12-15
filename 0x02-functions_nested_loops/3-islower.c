# include "main.h"
/**
 * main - Entry point
 * Description: 'function that checks for lowercase character.'
 * 
 * Returns Always 0 (Success)
 */
int _islower(int c)
{
int c;
if (c >= 'a' && c <= 'z')
	return (1);
else
	return (0);
}

