#include<stdlib.h>
#include<stdio.h>
/**
 * main - main block
 * Description: Write program that prints different three digit combinations
 * Seperated by comma
 * Prit in ascending order
 * Only use putchar 6 times
 * All code in main function
 * Return: 0
 */
int main(void)
{
int c;
int d;
int e = 0;
while (e < 10)
{
d = 0;
while (d < 10)
{
c = 0;
while (c < 10)
{
if (c != d && d != e && e < d && d < c)
{
putchar('0' + e);
putchar('0' + d);
putchar('0' + c);
if (c + d + e != 9 + 8 + 7)
{
putchar(',')
putchar(' ')
}
}
c++
}
d++
}
e++
}
putchar('\n')
return (0);
}
