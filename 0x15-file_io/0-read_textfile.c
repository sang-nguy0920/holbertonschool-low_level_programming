#include "holberton.h"

/**
 *read_textfile - function that reads a text file and prints it to the POSIX
 *@filename: filename of file to read/print
 *@letters: num of letters
 *
 *Description: function that reads a text file and prints it to the POSIX
 *section header: Section description
 *Return: actual num of letters or etc.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, num_bytes;
char *buff;

if (filename == NULL || letters == 0)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buff = malloc(sizeof(char) * letters);

num_bytes = read(fd, buff, letters);
if (num_bytes == -1)
return (0);

write(STDOUT_FILENO, buff, num_bytes);

close(fd);
free(buff);
return (num_bytes);

}
