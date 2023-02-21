#include <stdio.h>

/**
*main-this is aprogram that print some alphabets
*Return: alwas 0 (success)
*/

int main(void)
{

char lw;
for (lw = 'a'; lw <= 'z'; lw++)
{
if (lw != 'e' && lw != 'q')
putchar(lw);
}
putchar('\n');
return (0);
}
