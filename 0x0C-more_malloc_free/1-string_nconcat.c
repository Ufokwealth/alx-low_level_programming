#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes of string 2
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *p, *empt;
unsigned int a, b;
empt = "";
if (s1 == NULL)
s1 = empt;
if (s2 == NULL)
s2 = empt;
for (a = 0; s1[a] != '\0'; a++)
;
p = malloc((a + n + 1) * sizeof(*p));
if (p == NULL)
return (NULL);
for (a = 0; s1[a] != '\0'; a++)
p[a] = s1[a];
for (b = 0; s2[b] != '\0' && b < n; b++, a++)
p[a] = s2[b];
p[a] = '\0';
return (p);
}
