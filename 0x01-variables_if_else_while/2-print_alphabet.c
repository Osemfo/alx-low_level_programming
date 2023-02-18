#include <stdio.h>

/**
*main - a program that is printing alphabets on the screen
*return: value is alway 0 (success)
*/

int main(void)
{
char lc;
for (lc = 'a'; lc <= 'z'; lc++)
{
putchar(lc);
}
putchar('\n');
return (0);
}
