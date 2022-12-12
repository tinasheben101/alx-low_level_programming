# include <stdio.h> 
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int x, y;

	for(x = 'A'; x <= 'Z'; x++)
	putchar(x);

	for (y = 'a'; y <= 'z'; y++)
	putchar(y);
	putchar('\n');
	return (0);
}
