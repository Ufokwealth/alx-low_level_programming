#include "main.h"
/**
 * _strlen - compute the length of a NULL-terminated string
 * @str: the string to measure
 * Return: the lenght of str, or -1 if str is NULL
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
 * append_text_to_file - append text to the end of a file
 * @filename: name of file
 * @text_content: the data to append
 * Return: upon success, return 1. otherwise,return -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
ssize_t f_written = 0;
int a;
if (!filename)
return (-1);
a = open(filename, O_WRONLY | O_APPEND);
if (a < 0)
return (-1);
if (text_content)
f_written = write(a, text_content, _strlen(text_content));
close(a);
if (f_written < 0)
return (-1);
return (1);
}
