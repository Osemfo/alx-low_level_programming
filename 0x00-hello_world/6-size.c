#include <stdio.h>
/**
 *main-a program that prints the sizes of the various types
 *Return: 0 (success)
 */
int main(void)
char;
int;
long int;
long long int;
float;
printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(char));
printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(int));
printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(long long int));
printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(float));
return (0);
}
