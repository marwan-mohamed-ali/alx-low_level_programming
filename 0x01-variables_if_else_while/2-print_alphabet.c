#include <stdio.h>

/**
 * main - Entry point
 * Description: A C program that preints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char Aa = 'a';

	while (Aa <= 'z')

{
	putchar(Aa);
	Aa++;
}
	putchar('\n');
	return (0);
}
