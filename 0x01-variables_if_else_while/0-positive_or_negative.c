#include <stdlib.h>
#include <time.h>
#include <stdio.h>
<<<<<<< HEAD
/**
 * main - Determine if the last digit of a random number is
 * greater than or less than 5, or is zero..
(*
 * Return: 0 on success
=======

/**
 * main - Determines if a number is positive, negative or zero.
 *
 * Return: Always 0 (Success)
>>>>>>> f067f693a12f098ed13df5230553b8583cde1c60
 */
int main(void)
{
	int n;
<<<<<<< HEAD
	char last[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%s %d is %d and is ", last, n, n % 10);
	if (n % 10 > 5)
	{
		printf("greater than 5\n");
	}
	else if (n % 10 == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("less than 6 and not 0\n");
	}
	return (0);

=======

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
>>>>>>> f067f693a12f098ed13df5230553b8583cde1c60
}
