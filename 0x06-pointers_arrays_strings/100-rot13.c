#include "main.h"
#include <stdio.h>
/**
* rot13 - encoder rot13
* @s: pointer to string params
* Return: *S
*/
char *rot13(char *)
{
int i = 0;
while (s[i] != '\0')
{
while ((s[i] >= 'a' && s[i] <= 'z') ||
(s[i] >= 'A' && s[i] <= 'Z'))
{
if ((s[i] >= 'a' && s[i] <= 'm') ||
(s[i] >= 'A' && s[i] <= 'M'))
s[i] += 13;
else
s[i] -= 13;
i++;
}
return (s);
}
