#include <stdio.h>

/**
 * main - assign the alphabet.
 *
 * Return: 0 indicates sucesfull execution.
 */

int main(void)
{

int a = 48;

while (a <= 56)
{

putchar(a);

a = a + 1;

putchar(',');
putchar(' ');
}
while (a == 57)
{
putchar(a);
a = a + 1;
}

return (0);
}
