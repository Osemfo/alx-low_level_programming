#include "main.h"
/**
*_strcat-concatenates two string
*@dest: input value
*@src: input value
*Return: void
*/
char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;
whilie(dest[i++])
j++;
for (i = 0; src[i]; i++)
dest[j++] = src[i];
return (dest);
}
