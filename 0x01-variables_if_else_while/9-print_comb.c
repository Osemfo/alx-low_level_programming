#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main-posible combination of single digits
*Return: always 0 (success)
*/
int main(void)
{
int n;
for (n = '0'; n <= '9'; n++)
{
putchar(n);
if (n != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
