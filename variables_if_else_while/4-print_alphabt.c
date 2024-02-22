#include <stdio.h>
/**
* main - code to put a message
* Return: Always 0
*/
int main(void)
{
	char alphabet;
	char letter;

	for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
	for (letter = 'a'; letter <= 'z'; letter++)
	{
			if (letter != 'e' && letter != 'q')
					putchar(letter);
	}

	putchar('\n');
	return (0);
}
