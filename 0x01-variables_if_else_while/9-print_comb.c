#include <stdio.h>

/**
 * main - assign the alphabet.
 *
 * Return: 0 indicates sucesfull execution.
 */

int main(void)
{

int a = 48;

while (a < 58)
{

putchar(a);

a = a + 1;

if (a != 58)
{
putchar(',');
putchar(' ');
}
}

putchar('\n');
return (0);
}
