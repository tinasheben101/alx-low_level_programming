#include "main.h"
/**
 * main - Entry point
 * Description: 'print alphabet ten times'
 *
 * Returns Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char letter;

	while (count++ <= 9)
	{
	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
	}
}
