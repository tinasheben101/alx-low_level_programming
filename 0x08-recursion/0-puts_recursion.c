#include "main.h"
/**
 * program to prints a string, followed by a new line.
 * character string
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
	_putchar(*s);
	_puts_recursion(s + 1);
}
else
_putchar('\n');
}
