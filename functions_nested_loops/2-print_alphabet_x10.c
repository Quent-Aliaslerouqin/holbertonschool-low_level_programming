#include "main.h"
#include <unistd.h>
/**
*  print_alphabet - Print putchar, followed by a new line.
*
*Return: Always 0.
*/
void print_alphabet_x10(void)
{
	int a;
	char alphabet;
	for (a = 0; a < 10; a++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}

		_putchar('\n');
	}
}
