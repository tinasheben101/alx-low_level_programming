#include "main.h"
/**
 *
 *main - Entry point 
 *description :'Description: 'the program's description'
 * Returns Always 0 (Success)
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
