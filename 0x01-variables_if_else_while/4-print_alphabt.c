#include <stdio.h>
/**
 *main - prints alphabet in lowercase -q -e, followed by a new line
 *
 *Return: returns int
 */

int main(void)
{
char c;
c = 'a';
while (c <= 'z')
if (c != 'e' && c != 'q')
{
putchar (c);
c = c + 1;
}
else
{
c = c + 1;
}
putchar ('\n');

return (0);
}
