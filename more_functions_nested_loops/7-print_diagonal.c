#include "main.h"

/**
* print_line - a
* @n: a
* Return: a
*/
void print_diagonal(int n)
{
	int h;
	int i;
if (n < 0)
{
	putchar('\n');
}
for (i = 0; i < n; i++)
	{
	for (h = 0; h < i; h++)
	{
		_putchar(' ');
	}

	_putchar('\\');
	_putchar('\n');
	}

}


