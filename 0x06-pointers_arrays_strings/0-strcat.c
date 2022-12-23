#include "main.h"
/**
 *main - check the code
 *Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
char dest = "Hello";
char src = "World";
char *ptr;

printf("%s\n", dest);
printf("%s", src);
ptr = dest + src;
printf("%s", dest);
printf("%s", src);
printf("%s", ptr);
return dest;
}
