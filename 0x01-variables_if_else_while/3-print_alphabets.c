#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - entry point
* Description: Printz from a to z
* Return: 0
*/
int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
		printf("%c", 'a' + i);
	for (i = 0; i < 26; i++)
		printf("%c", 'A' + i);

	printf("\n");

	return (0);
}
