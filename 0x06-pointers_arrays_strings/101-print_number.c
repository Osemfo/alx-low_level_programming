#include "main.h"
/**
*print_number-print numbers
*@n: integer
*Return: 0 success
*/
void print_number(int n)
{
unsigned int n1;
n1 = n;
if (n < 0)
{
_putchar('_');
n1 = -n;
}
if (n1 / 10 != 0)
{
print_numbers(n1 / 10);
}
_putchar((n1 % 10) + '0');
}
