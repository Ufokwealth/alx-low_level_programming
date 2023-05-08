#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * read_textfile - function reads a text file and prints
 * @filename: name of file
 * @letters: number of letters
 * Return: number of letters it could read and print,0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer = NULL;
ssize_t f_read;
ssize_t f_written;
int i;
if (!(filename && letters))
return (0);
i = open(filename, O_RDONLY);
if (i == -1)
return (0);
buffer = malloc(sizeof(char) * letters);
if (!buffer)
return (0);
f_read = read(i, buffer, letters);
close(i);
if (f_read < 0)
{
free(buffer);
return (0);
}
if (!f_read)
f_read = letters;
f_written = write(STDOUT_FILENO, buffer, f_read);
free(buffer);
if (f_written < 0)
return (0);
return (f_written);
}

