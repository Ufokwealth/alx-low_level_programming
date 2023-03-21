#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
int k, p;
for (k = 0; k < 9; k++)
{
for (p = k + 1; p <= 9; p++)
{
if (p != k)
{
putchar((k);
putchar((p);
if (k == 8 && p == 9)
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
