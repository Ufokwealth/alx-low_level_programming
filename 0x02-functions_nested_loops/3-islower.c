#include "main.h"
/**
*_islower - check code
*@c:An input character
*Description: function uses _putchar function to print
*alphabet in lowercase 10 times
*Return: 1 for lowercase character or 0 if is uppercase
*/
int _islower(int c)
{
char i;
int lower = 0;
for (i = 'a'; i <= 'z'; i++)
{
if (i == c)
lower = 1;
}
return (lower);
}
