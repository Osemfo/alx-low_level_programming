#include <stdio.h>
/**
*main-this is a program that prints lowercase and uppercase alphabets
*Return: always zero(0)
*/

int main(void)
{
char ch;
for (a = 'a'; ch <= 'z'; ch++)
putchar(ch);
for (ch = 'A'; ch <= 'Z'; ch++)
putchar(ch);

putchar('\n');
return (0);
}
