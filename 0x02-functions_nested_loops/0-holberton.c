#include "holberton.h"

/**
 * main - print the string holberton.
 * Return: success.
 */

int main(void)
{
char *e;

int i;
e = "Holberton";

for (i = 0; i < 9; i++)
{
_putchar (e[i]);
}
_putchar('\n');
return (0);
}
