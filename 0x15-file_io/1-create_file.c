#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_file - function that creates a file
 * @filename: name of file
 * @text_content: content file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int a = 0, file;
if (filename == NULL)
return (-1);
if (text_content[a] != '\0')
{
a++;
}
file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (file == -1)
return (-1);
write(file, text_content, a);
return (1);
}
