#include <stdio.h>

/**
 * main - assign the alphabet.
 *
 * Return: 0 indicates sucesfull execution.
 */

int main(void)
{

char c = 'a';
while (c <= 'z')
{

putchar(c);

c = c + 1;

}
putchar('\n');
return (0);
}
