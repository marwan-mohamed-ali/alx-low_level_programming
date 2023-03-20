#include <stdio.h>

/**
 * main - Entry point
 * Description: A C program that preints ll single digit numbers.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int N = 0;
	while (N <= 9)
{	
	putchar(N + '0');
	N++;
}
	putchar('\n');
	return (0);
}
