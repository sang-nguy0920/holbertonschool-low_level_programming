#include "holberton.h"
/**
 *exit_msgs - function that handles error messages
 *@num: num
 *@str: *pointer to str
 *
 *Description: function that handles error messages
 *section header: Section description
 *Return: 0 for success
 */

int exit_msgs(int num, char *str)
{
int val;

switch (num)
{
case 97:
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
val = 97;
break;
case 98:
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
val = 98;
break;
case 99:
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
val = 99;
break;
default:
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", num);
val = 100;
break;
}
return (val);
}

/**
 *main - program that copies the content of a file to another file.
 *@argc: num of srgs
 *@argv: *argv pointer to str
 *
 *Description: program that copies the content of a file to another file.
 *section header: Section description
 *Return: 0 for success
 */

int main(int argc, char **argv)
{
char *file_from, *file_to, buffer[BUFLEN];
int fd_to, fd_from, read_val;

if (argc != 3)
exit(exit_msgs(97, NULL));

file_from = argv[1], file_to = argv[2];
fd_from = open(file_from, O_RDONLY);

if (fd_from == -1)
exit(exit_msgs(97, NULL));

fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);

if (fd_to == -1)
exit(close(fd_from) == -1 ? exit_msgs(fd_from, NULL) :
exit_msgs(99, file_to));

read_val = read(fd_from, &buffer, BUFLEN);

while (read_val)
{
if (read_val == -1)
exit(close(fd_from) == -1 ? exit_msgs(fd_from, NULL) :
close(fd_to) == -1 ? exit_msgs(fd_to, NULL) :
exit_msgs(98, file_from));

if (write(fd_to, &buffer, read_val) == -1)
exit(exit_msgs(99, file_to));
read_val = read(fd_from, &buffer, BUFLEN);
}
return (close(fd_from) == -1 ? exit_msgs(fd_from, NULL) :
close(fd_to) == -1 ? exit_msgs(fd_to, NULL) : 0);
}
