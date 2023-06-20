#include<stdio.h>
/**
 * main - entry point
 * Description: computes fib from 1 to 50
 * Return: 0
*/

int main (void)
{
	int n1 = 0 , n2 = 1, c = 2;
	printf("%d, ", n1);
	printf("%d, ", n2);
	while (c < 50)
	{
		int res = n1 + n2;
		printf("%d", res);
		n1 = n2;
		n2 = res;
		c++;
		if(c != 50 -1)
			printf(", ");
	}
	return (0);
}
