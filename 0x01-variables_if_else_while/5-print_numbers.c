#include <stdio.h>
<<<<<<< HEAD
/**
 * main - Prints the numbers from 0-9.
(*
 * Return: 0 on success
 */
int main(void)
{
	printf("0123456789\n");
=======

/**
 * main - Prints numbers from 0 to 9.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
>>>>>>> f067f693a12f098ed13df5230553b8583cde1c60
	return (0);
}
