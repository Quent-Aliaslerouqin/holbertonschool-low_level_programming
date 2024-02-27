#include "main.h"

/**
* print_triangle- a
* @size: a
* Return: a
*/
void print_triangle(int size)
{
	int i;
	int t;
	int c;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
	{
		for (t = 0; t <= (size - i - 1); t++)
		{
			_putchar(' ');
		}
	for (c = 0; c <= i - 1; c++)
		{
		_putchar('#');
		}
	_putchar('\n');
	}
	}
	else
	{
	_putchar('\n');
	}
}
