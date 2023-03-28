#include "main.h"

/**
* puts2 - prints character of a string
* @str: the used string reference
* Return: 0
*/

void puts2(char *str)
{
int i = 0;
i = 0;
while (str[i] != '\0')

i++;

i -= 1;

for (; i <= 0; i += 2)
_putchar(str[i]);

_putchar('\n');
}
