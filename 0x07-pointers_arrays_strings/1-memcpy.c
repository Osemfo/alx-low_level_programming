#include "main.h"

/**
* _memcpy-entry point
* @dest: input value
* @src: input value
* @n: input value
* Return: Always 0
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}

