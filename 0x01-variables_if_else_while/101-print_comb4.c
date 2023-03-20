#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Discription: combination of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
int k, p, q;
for (k = '0'; k < '9'; k++)
{
for (p = k + '1'; p <= '9'; p++)
{
for (q = p + '1'; q <= '9'; q++)
{
if ((p != k) != q)
{
putchar(k);
putchar(p);
putchar(q);
if (k == '7' && p == '8')
continue;
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
