#include "main.h"
#include <stdio.h>

/**
* _strspn-entry point
* @s: input value
* @accept: input value
* Return: always 0
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int a = 0, b, t = 0;
while (accept[a])
{
b = 0;
while (s[b] != 32)
{
if (accept[a] == s[b])
{
t++;
}
b++;
}
a++;
}
return (t);
}
