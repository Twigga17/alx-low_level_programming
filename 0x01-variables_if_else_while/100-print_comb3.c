#include<stdio.h>
#include<stdlib.h>
/**
 * main - main block
 * Description: Prints all possible combinations of two digits
 * No. seperated by comma and space
 * 01 and 10 same combination, print smallest combination
 * Ascending order with two digits
 * Return:0
 */
int main(void)
{
int a;
int b = 0;
while (b < 10)
{
a = 0;
while (a < 10)
{
if (b != a && b < a)
{
putchar ('0' + b);
putchar ('0' + a);
if (a + b != 17)
{
putchar(',');
putchar(' ');
}
}
a++;
}
b++;
}
putchar('\n');
return (0);
}
