#include "main.h"
#include <stdio.h>
/**
 * main - program that prints its name, followed by a new line
 * @argc: argument count
 * @argv: arguement value
 * Return: Always 0 (Succes)
 */
int main(int argc, char *argv[])
{
if (argc > 0)
printf("%s\n", argv[0]);
return (0);
}
