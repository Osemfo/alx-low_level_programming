#include "main.h"
#include <unisted.h>
/**
*_putchar-writes the charactat c to stdout
*@c: character to print
*Return: success on 1
*On error, -1 is returned and errno is set appropriately
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
