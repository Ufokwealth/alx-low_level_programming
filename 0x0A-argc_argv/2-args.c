#include "main.h"
#include <stdio.h>
/**
 * main - a program that prints all arguments it reeives
 * @argc: argument count
 * @argv: argument value
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
while (argc--)
{
printf("%s\n", *argv++);
}
return (0);
}
