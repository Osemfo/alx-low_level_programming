#include <stdio.h>
/**
*main-print the number in base 16
*Return: always 0 (success)
*/
int main(void)
{
int num;
char la;
for (num = 0; num < 10; num++)
putchar((num % 10) + '0');
for (la = 'a'; la <= 'z'; la++)
putchar(la);
putchar('\n');
return (0);
}
