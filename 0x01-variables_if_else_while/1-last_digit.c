#include <stdlib.h>
#include <time.h>
#include <stdio.h>
<<<<<<< HEAD
/**
 * main - entry point
 * description: 'get the last degit of a number
 * return: always 0
=======

/**
 * main - Prints the last digit of a randomly generated number
 * and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
>>>>>>> f067f693a12f098ed13df5230553b8583cde1c60
 */
int main(void)
{
	int n;
<<<<<<< HEAD
	int ld;
srand(time(0));
	n = rand() - RAND_MAX / 2;
ld = n % 10;
if (ld > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, ld);
}
else if (ld == 0)
{
	printf("last digit of %d is %d and is 0\n", n, ld);
}
else
{
	printf("last digit of %d is %d and less than 6 and not 0\n", n, ld);
}
=======

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",
			n, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
			n, n % 10);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n",
			n, n % 10);
	}

>>>>>>> f067f693a12f098ed13df5230553b8583cde1c60
	return (0);
}
