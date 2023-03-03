#include "main.h"
/**
*_strcmp-a function that compares two strings
*@s1: input value
*@s2: input value
*Return: diff
*/
int _strcmp(char *s1, char *s2)
{
int i = 0;
diff = 0;
while (i)
{
if (s1[i] == '\0' && s2[i] == '\0')
break;
else if (s1[i] == '\0')
{
diff = s2[i];
break;
}
else if (s2[i] == '\0')
{
diff = s1[i];
break;
}
else if (s1[i] != s2[i])
{
diff = s1[i] - s2[i];
break;
}
else
i++;
}
return (diff);
}
