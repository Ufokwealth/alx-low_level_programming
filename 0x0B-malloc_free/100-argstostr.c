#include "main.h"
#include <stdlib.h>
/**
* argstostr -  a function that concatenates all the arguments of your program.
* @ac: number of arguments
* @av: array containing arguments
* Return: 0
* or NULL if ac = 0, if av == NULL,
* or up on failure
*/
char *argstostr(int ac, char **av)
{
char *s;
int l = 0, a = 0, b, c = 0;
if (ac <= 0 || av == NULL)
return (NULL);
for (; a < ac; a++)
{
for (b = 0; av[a][b]; b++)
l++;
}
l++;
s = malloc(l * sizeof(char));
if (s == NULL)
return (NULL);
for (a = 0; a < ac; a++)
{
for (b = 0; av[a][b]; b++)
{
s[c] = av[a][b];
c++;
}
s[c] = '\n';
c++;
}
s[c] = '\0';
return (s);
}
