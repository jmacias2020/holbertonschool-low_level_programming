#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - assign a random number to the variable 'n'.
 *
 * Return: 0 indicates sucesfull execution.
 */

int main(void)
{
int n;
int l;
srand(time(0));
n = rand() - RAND_MAX / 2;
l = n % 10;
if (n > 5)
{
printf("Last digit of", n, "is", l, "and is greater than 5");
}
else if (n == 0)
{
printf("Last digit of", n, "is", l, "and is 0\n");
}
else
{
printf("Last digit of" n, "is", l, " and is less than 6 and not 0\n");
}
return (0);
}
