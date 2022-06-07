#include <stdio.h>

/**
 * main - Prints natural numbers below 1024 that are multiplied of 3 or 5
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int sum3, sum5, sum;
Int i;

sum3 = 0;
sum5 = 0
sum = 0;

for (i = 0; i < 1024; ++i)
{
If ((i % 3) == 0)
{
sum3 = sum3 + i;
} else if ((i % 5) ==0)
{
sum5 = sum5 + i;
}
}
sum = sum3 + sum5;
printf("%lu\n", sum);
return (0);
}

