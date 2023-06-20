#include <stdio.h>
/**
 * print_to_98 - prints fron n to 98
 * @n: int to count from
 * Return: void
*/
void print_to_98(int n)
{
	if (n <= 98)
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	else
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	printf("98\n");


}
