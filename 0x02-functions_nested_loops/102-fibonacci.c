#include<stdio.h>
/**
 * main - entry point
 * Description: computes fib from 1 to 50
 * Return: 0
*/

int main (void)
{
	int i;

	for(i = 0; i <= 50; i++){
		if(i <= 2)
			printf("%d, ", i);
		else
			printf("%d, ", (i - 1) + (i - 2));
	}
	return (0);
}
