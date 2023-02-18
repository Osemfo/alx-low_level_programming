#include <stdio.h>
/**
*main-print letters in reverse
*Return: always 0 (success)
*/
int main(void)
{

char la;


for (la = 'z'; la >= 'a'; la--)
putchar(la);

putchar('\n');

return (0);
}
