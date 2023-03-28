#include <stdio.h>
/**
<<<<<<< HEAD
 * main - entry point
 * return: always 0 (success)
 */
int main(void)
{
printf("Size of a char: %lu byte(s)\n", sizeof(char));
printf("size of an int: %lu byte(s)\n", sizeof(int));
printf("size of long int: %lu byte(s)\n", sizeof(long int));
printf("size of long long int: %lu byte(s)\n", sizeof(long long int));
printf("size of float: %lu byte(s)", sizeof(float));
return (0);
=======
 * main - Prints out the sizes of various data types on the computer
 * this program is compiled on.
 * Return: 0 if success.
 */
int main(void)
{
	char c;
	int i;
	long l;
	long long ll;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(ll));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
>>>>>>> f067f693a12f098ed13df5230553b8583cde1c60
}
