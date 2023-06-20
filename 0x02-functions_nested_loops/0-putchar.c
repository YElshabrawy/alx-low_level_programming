#include "main.h"
/**
 * main - entry point
 * Description: prints _putchar to the std output
 * Return: 0
*/

int main(void)
{
	char str[] = "_putchar\n";
	int i;

	for (i = 0; i < (int)sizeof(str) - 1; i++)
		_putchar(str[i]);

	return (0);
}
