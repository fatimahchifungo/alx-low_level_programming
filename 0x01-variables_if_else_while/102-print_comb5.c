#include <stdio.h>
<<<<<<< HEAD
/**
 * main - Prints all possible combinations of a pair of
 * two digit numbers, without any repetition.
(*
 * Return: 0 on success.
 */

=======

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */
>>>>>>> f067f693a12f098ed13df5230553b8583cde1c60
int main(void)
{
	int i, j;

<<<<<<< HEAD
	for (i = 0; i <= 99; i++)
	{
		for (j = 0; j <= 99; j++)
		{
			if (i < j && i != j)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
=======
	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (i < j)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
>>>>>>> f067f693a12f098ed13df5230553b8583cde1c60
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
<<<<<<< HEAD
=======

>>>>>>> f067f693a12f098ed13df5230553b8583cde1c60
		}
	}
	putchar('\n');
	return (0);
}
