#include <stdio.h>
<<<<<<< HEAD
/**
 * main - prints all possible combinations of single digit numbers.
(*
 * Return: 0 on success
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		if (i != '9')
=======

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
>>>>>>> f067f693a12f098ed13df5230553b8583cde1c60
		{
			putchar(',');
			putchar(' ');
		}
<<<<<<< HEAD
		++i;
=======
>>>>>>> f067f693a12f098ed13df5230553b8583cde1c60
	}
	putchar('\n');
	return (0);
}
<<<<<<< HEAD

=======
>>>>>>> f067f693a12f098ed13df5230553b8583cde1c60
