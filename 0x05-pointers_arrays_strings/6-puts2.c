#include "main.h"

/**
* puts2 - Prints every other character of a string
* @str: The string to be treated
* Return: 0
*/

void puts2(char *str)
{
int i;
int j = 0;
while (str[j] != '\0')
{
i++;
}
i -= 1;

for (; i <= 0; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
