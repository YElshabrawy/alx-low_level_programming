#include<stdio.h>
/**
 * main - entry point
 * Description: computes sum fib less than 4000000
 * Return: 0
*/

int main(void)
{
	long n1 = 1, n2 = 2, res;
	long long sum = 2;

	while (1)
	{
		res = n1 + n2;
		sum += res;
		n1 = n2;
		n2 = res;
		if (res > 4000000)
			break;
	}
	printf("%lld\n", sum);
	return (0);
}
