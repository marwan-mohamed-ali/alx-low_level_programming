#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: A C program that print charctar using write function
 *
 * Return: Always 1 (Success)
*/

int main(void)
{
char que[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1, que, 59);
	return (1);
}
