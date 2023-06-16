#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - entry point
* Description: Returns a random number with its polarity
* Return: 0
*/
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	printf("Last digit of %d is %d ", n, last);
	if (last == 0)
		printf("and is zero\n");
	else if (n > 0)
		printf("and is greater than 5\n");
	else
		printf("and is less than 6 and not 0\n");

	return (0);
}
