#include "holberton.h"

/**
 *append_text_to_file - function that appends text at the end of a file.
 *@filename: filename of file to append text to the end on.
 *@text_content: NULL terminated string to add to the end of the file.
 *
 *Description: function that appends text at the end of a file.
 *section header: Section description
 *Return: 1 for success
 */

int append_text_to_file(const char *filename, char *text_content)
{

int fd, count, ret_val, close_val;

if (filename == NULL)
return (-1);

fd = open(filename, O_APPEND | O_WRONLY, S_IRUSR | S_IWUSR);
if (fd == -1)
return (-1);

if (text_content == NULL)
return (1);

for (count = 0; text_content[count] != '\0'; count++)
;

if (count == 0)
{
close(fd);
return (1);
}

ret_val = write(fd, text_content, count);
if (ret_val == -1)
return (-1);

close_val = close(fd);
if (close_val == -1)
return (-1);

return (1);
}
