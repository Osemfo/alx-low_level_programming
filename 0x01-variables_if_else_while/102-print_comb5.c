#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main-all possible combinations of two digits
*Return: always 0 (success)
*/

int main(void)
{
int a, b;
for (a = 0; a <= 98; a++)
{
for (b = a + 1; b <= 99; b++)
{
putchar((a / 10) + '0');
putchar((a % 10) + '0');
putchar(' ');
if (a == 98 && b == 99)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
