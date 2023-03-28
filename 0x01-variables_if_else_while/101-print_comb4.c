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
	int k = '0';

	while (i <= '7')
	{
		while (j <= '8')
		{
			while (k <= '9')
			{
				if (i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (!(i == '7' && j == '8' && k == '9'))
=======

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, l;

	for (n = 48; n < 58; n++)
	{
		for (m = 49; m < 58; m++)
		{
			for (l = 50; l < 58; l++)
			{
				if (l > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(l);
					if (n != 55 || m != 56)
>>>>>>> f067f693a12f098ed13df5230553b8583cde1c60
					{
						putchar(',');
						putchar(' ');
					}
<<<<<<< HEAD

				}
				k++;
			}
			k = '0';
			j++;
		}
		j = '0';
		i++;
=======
				}
			}
		}
>>>>>>> f067f693a12f098ed13df5230553b8583cde1c60
	}
	putchar('\n');
	return (0);
}
