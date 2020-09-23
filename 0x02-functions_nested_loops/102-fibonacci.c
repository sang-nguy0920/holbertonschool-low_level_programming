#include<stdio.h>

/**
 *fibonacci - prints first 50 Fibonacci numbers
 *@n: number to print 50
 *
 * Return: int
 */

void main()
{
int prv=0,pre=1,trm,i,n;
n = 50;
printf("% 5d % 5d", prv,pre);
 
for(i=1;i<=n;i++)
{
trm=prv+pre;
printf("% 5d",trm);
prv=pre;
pre=trm;
}
printf("\n");
}
