#include "main.h"
/**
 * _puts_recursion - a
 * @s: k
 * Return: 0
 */
void _puts_recursion(char *s)

{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else if (*s == '\0')
	{
		_putchar('\n');
	}
}
