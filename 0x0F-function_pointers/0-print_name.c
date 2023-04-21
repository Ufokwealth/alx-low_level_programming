#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - a function that prints a name.
 * @name: name to print
 * @f: function to print name
 * Return: 0
 */
void print_name(char *name, void (*f)(char *name))
{
if (name == NULL || f == NULL)
return;
f(name);
}
