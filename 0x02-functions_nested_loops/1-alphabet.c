#include"main.h"
/**
 * print_alphabet - prints alpha in lowercase
 * Description: prints alpha in lowercase
 * Return: 0
*/

void print_alphabet(void)
{
	int i;

	for (i = 0; i < 26; i++)
		_putchar('a' + i);
	_putchar('\n');
}
