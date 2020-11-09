#include "holberton.h"

/**
 *create_file -  function that creates a file.
 *@filename: filename of file to create
 *@text_content: NULL terminated string to write to the file.
 *
 *Description:  function that creates a file.
 *section header: Section description
 *Return: 1 for success
 */

int create_file(const char *filename, char *text_content)
{
int fd, ret_val, count;

if (filename == NULL)
return (-1);

fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
if (fd == -1)
return (-1);

if (text_content == NULL)
text_content = "";

for (count = 0; text_content[count] != '\0'; count++)
;

ret_val = write(fd, text_content, count);
if (ret_val == -1)
return (-1);

close(fd);

return (1);
}
