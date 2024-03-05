#include "main.h"
/**
 * _memset - cc
 * @s: cc
 * @b: cc
 * @n: cc
 *
 * Return: a
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int len = 0;
	while (len < n)
	{
		s[len] = b;
		len++;
	}
	return (s);
}


















