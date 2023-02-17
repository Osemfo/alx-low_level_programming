#include <stdio.h>
/**
 *main-a program that prints the sizes of the various types
 *Return: 0 (success)
 */
int main(void)
char a;
int b;
long int x;
long long int y;
float z;
printf("Size of char: %i byte(s)\n", (unsigned long)sizeof(a));
printf("Size of int: %i byte(s)\n", (unsigned long)sizeof(b));
printf("Size of long int: %i byte(s)\n", (unsigned long)sizeof(x));
printf("Size of long long int: %i byte(s)\n", (unsigned long)sizeof(y));
printf("Size of float: %i byte(s)\n", (unsigned long)sizeof(z));
return (0);
}
