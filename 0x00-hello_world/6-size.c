#include <stdio.h>
/**
 *main-a program that prints the sizes of the various types
 *Return: 0 (success)
 */
int main(void)
{
char a;
int b;
long int x;
long long int y;
float z;
printf("Size of char: %lu byte(s)\n", (unasigned long)sizeof(a));
printf("Size of int: %lu byte(s)\n", (unasigned long)sizeof(b));
printf("Size of long int: %lu byte(s)\n", (unasigned long)sizeof(x));
printf("Size of long long int: %lu byte(s)\n", (unasigned long)sizeof(y));
printf("Size of float: %lu byte(s)\n", (unasigned long)sizeof(z));
return (0);
}
