#include "main.h"
#include <unistd.h>
/**
*  main - Print putchar, followed by a new line.
*
*Return: Always 0.
*/

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
	{
		_putchar(alphabet);

	}

	_putchar('\n');
}
