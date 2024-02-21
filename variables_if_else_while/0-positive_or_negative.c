#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - code to put a message
* Return: Always 0
*/
int main(){
	srand(time(0));
	int n = rand() - RAND_MAX / 2;
	
	if (n > 0)
		printf("positif\n");
	else if (n == 0)
		printf("nul\n");
	else
	printf("négatif\n");

    return 0;
}
