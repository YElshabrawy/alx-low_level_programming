#include<stdio.h>
/**
 * main - entry point
 * @argc: num of args
 * @argv: params
 * Return: 0
*/

int main(int argc, char **argv)
{
	int i, n;

	if (argc != 2)
	{
		printf("Error\n");
		error(1);
	}

	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		error(2);
	}

	for (i = 0; i < n; i++)
	{
		printf("%02hhx", ((char *)main)[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
