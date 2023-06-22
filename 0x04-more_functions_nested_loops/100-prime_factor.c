#include<stdio.h>
#include<math.h>
/**
 * isPrime - checks if a number is prime
 * Description: checks prime
 * @n: num to be checked
 * Return: 1 if is prime
*/
int isPrime(unsigned long n)
{
	int i;

	if (n == 0 || n == 1)
		return (0);
	for (i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return (0);
	return (1);
}

/**
 * main - entry point
 * Description: return largest prime factor of 612852475143
 * Return: 0
*/
int main(void)
{
	unsigned long i;

	for (i = 612852475143; i > 0; i--)
	{
		if (isPrime(i))
			break;
	}
	printf("%lu", i);
	return (0);
}
