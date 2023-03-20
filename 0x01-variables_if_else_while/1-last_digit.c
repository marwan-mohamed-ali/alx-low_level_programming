#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: A C program that print a last digit of random number
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n, digit_n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit_n = n % 10;
	if (digit_n > 5)
	printf("Last digit of %i is %i and is greater than 5\n", n, digit_n);
	else if (digit_n < 6 && digit_n != 0)
	printf("Last digit of %i is %i and is less than 6 and not 0\n", n, digit_n);
	else
	printf("Last digit of %i is 0 and is 0\n", n);
	return (0);
}
