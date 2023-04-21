#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - print the results of simple operations.
 * @argc: number of arguments
 * @argv: array of pointer
 * Return: exits 0 normally, 98 on argc error, 99 on illegal operator
 */
int main(int argc, char *argv[])
{
int num1, num2;
chr *op;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
op = argv[2];
num2 = atoi(argv[3]);
if (get_op_func(op) == NULL || op[1] != "\0")
{
printf("Error\n");
exit(99);
}
if ((*op == '/' && num2 == 0) ||
(*op == '%' && num2 == 0))
{
printf("Error\n");
exit(100);
}
















		9
