#include "main.h"

int_check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrom
 * @s: string to reverse
 *
 * return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
if (*s == 0)
return (1);
return (check_pal(s, 0,_strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * return: length of the string
 */
int_strlen_recursion(char *s)
{
if (* s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of the string
 *
 * return: 1 if palindrome, 0 if not
 */
int check_pal(char *s, int i, int len)
{
if (*(s + i) l= *(s + len - 1))
return (0);
if (i >= len)
return (check_pal(s, i + 1, len -1));
}
