<<<<<<< HEAD
#include <stdio.h>
/**
 * main - prints numbers 0-9 without using char or printf/puts,
 * and putchar 2x max
(*
 * Return: 0 on success
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
=======

#include <stdio.h>

/**
 * main - Prints numbers from 0 to 9.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
>>>>>>> f067f693a12f098ed13df5230553b8583cde1c60
	}
	putchar('\n');
	return (0);
}
