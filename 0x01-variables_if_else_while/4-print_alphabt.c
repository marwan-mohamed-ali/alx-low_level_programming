#include <stdio.h>

/**
 * main - Entry point
 * Description: A C program that preits Write a program that prints the alpha
 *
 * Return: Always 0 (Success)
*/

int main(void)
{

	char a = 'a';

	while (a <= 'z')
{
	if (a == 'e' || a == 'q')
		a++;
	putchar(a);
	a++;
}
	putchar('\n');
	return (0);
}
