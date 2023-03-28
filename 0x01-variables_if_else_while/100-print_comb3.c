#include <stdio.h>
<<<<<<< HEAD
/**
 * main - print numbers from 00 to 99.
(*
 * Return: 0 on success
 */
int main(void)
{
	int i = '0';
	int j = '0';

	while (i <= '9')
	{
		while (j <= '9')
		{
			if (!(i > j || i == j))
			{
				putchar(i);
				putchar(j);
				if (i == '8' && j == '9')
				{
					putchar('\n');
				}
				else
=======

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int n, m;

	for (n = 48; n <= 56; n++)
	{
		for (m = 49; m <= 57; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 56 || m != 57)
>>>>>>> f067f693a12f098ed13df5230553b8583cde1c60
				{
					putchar(',');
					putchar(' ');
				}
			}
<<<<<<< HEAD
			j++;
		}
		j = '0';
		i++;
	}
=======
		}
	}
	putchar('\n');
>>>>>>> f067f693a12f098ed13df5230553b8583cde1c60
	return (0);
}
