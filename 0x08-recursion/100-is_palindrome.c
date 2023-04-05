#include "main.h"
/**
 * _strlen_recursion - Helper function that returns the length of a string
 *
 * @s: The string to measure
 *
 * Return: The length of s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * _is_palindrome_recursion - Helper function
 *
 * @s: The string to check
 * @start: The index of the first character to check
 * @end: The index of the last character to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int _is_palindrome_recursion(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (_is_palindrome_recursion(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a given string is a palindrome
 *
 * @s: The string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len <= 1)
		return (1);
	return (_is_palindrome_recursion(s, 0, len - 1));
}
