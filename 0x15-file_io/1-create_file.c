#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - compute the length of NULL-terminated string
 * @str: the string to measure
 * Return: the length of str, or -1 if str is NULL
 */
ssize_t _strlen(const char *str)
{
ssize_t len = 0;
if (!str)
return (-1);
while (*str++)
++len;
return (len);
}
/**
 * create_file - function that creates a file
 * @filename: name of file
 * @text_content: content file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
ssize_t f_written = 0;
int a;
if (!filename)
return (-1);
a = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (a < 0)
return (-1);
if (text_content)
f_written = write(a, text_content, _strlen(text_content));
close(a);
if (f_written < 0)
return (-1);
return (1);
}
