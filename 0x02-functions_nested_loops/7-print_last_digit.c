#include"main.h"
#define ABS(x) ((x) < 0 ? -(x) : (x))
/**
 * print_last_digit - returns last digit of int
 * @n: int to be used
 * Return: last digit of int (1234 -> 4)
*/
int print_last_digit(int n)
{
	int last = ABS(n) % 10;

	_putchar(last + '0');
	return (last);
}
