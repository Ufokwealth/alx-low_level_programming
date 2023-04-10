#include "main.h"
#include <stdio.h>
/**
* main - A program that prints the number of arguments passed into it
* @argc: an argument count
* @argv: argumment value
* Return: Always 0 (Succes)
*/
int main(int argc, char *argv[])
{
if (argv[0])
printf("%d\n", argc - 1);
return (0);
}
