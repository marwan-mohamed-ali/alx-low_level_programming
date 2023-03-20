#include <stdio.h>

/**
 * main - Entry point
 * Description: A C program that preints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
char Aa = 'z';

while (Aa >= 'a')

{
putchar(Aa);
Aa--;
}
putchar('\n');
return (0);
}
