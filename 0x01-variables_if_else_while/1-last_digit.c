#include <stdlib.h> 
#include <time.h> 
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**  
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success
 */

int main(void)
{
	int n , x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	if (x > 5) 
	{
	printf("Last digit of %d is %d", n, x);
	}
	if (x == 0)
	{                                                                                                                                                                                     
        printf("Last digit of %d is %d", n, x);                                                                                                                                     
        }
        if (x < 6 && x != 0)
	{
	printf("Last digit of %d is %d", n, x); 
	}
	return (0);
}
