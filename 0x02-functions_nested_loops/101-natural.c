#include<stdio.h>

/**
 *main - computes and prints the sum of all the multiples of 3 or 5 < 1024
 *@:
 *
 * Return: int
 */

int main(void)
{
int a, b, c, ma, mb;
c = 0;
for (a = 0; a <= (1024 / 3); a++)
{
ma = 3 * a;
c += ma;
}
for (b = 0; b <= (1024 / 5); b++)
{
if (!(b % 3 == 0))
{
mb = 5 * b;
c += mb;
}
}
printf("%d\n", c);
return (0);
}
