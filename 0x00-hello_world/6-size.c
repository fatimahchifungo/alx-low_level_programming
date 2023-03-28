#include <stdio.h>
/**
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
}
