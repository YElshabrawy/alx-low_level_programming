#include"main.h"
/**
 * print_alphabet_x10 - prints alpha 10 times in lowercase
 * Description: prints alpha in lowercase
 * Return: 0
*/

void print_alphabet_x10(void)
{
	int i;
	int count = 11;

	while (--count)
	{
		for (i = 0; i < 26; i++)
			_putchar('a' + i);
		_putchar('\n');
	}
}
