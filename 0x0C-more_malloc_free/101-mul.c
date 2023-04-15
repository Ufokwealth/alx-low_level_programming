#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that multiplies two positive numbers.
 * @argc: arguements count
 * @argv: arguement value
 * Return: Always 0
 */
int main(int argc, char **argv)
{
int num1, num2, result;
if (argc != 3)
{
printf("Error\n");
exit(98);
}
else
{
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num1 * num2;
printf("%d\n", result);
return (0);
}
}
