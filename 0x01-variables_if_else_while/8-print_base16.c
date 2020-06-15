#include <stdio.h>

/**
 * main - assign the alphabet.
 *
 * Return: 0 indicates sucesfull execution.
 */

int main(void)
{
char c1 = 0x30;
char c2 = 0x61;
while (c1 <= 0x39)
{

putchar(c1);

c1 = c1 + 1;

}

while (c2 <= 0x66)
{

putchar(c2);

c2 = c2 + 1;

}

putchar('\n');
return (0);
}
