#include<stdio.h>
/**
 * main - starts execution
 *
 * Return: 0 indicates sucesfull execution.
 */

int main(void)
{
char x;
int y;
long int z;
long long int x1;
float y1;
printf("Size of a char: %d byte(s)\n", sizeof(x));
printf("long long int: %d byte(s)\n", sizeof(y));
printf("Size of a long int: %d byte(s)\n", sizeof(z));
printf("Size of a long long int: %d byte(s)\n", sizeof(x1));
printf("Size of a float: %d byte(s)\n", sizeof(y1));
return (0);
}
