#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 *
 * @n: the number of the times table
 *
 * Return: void
*/

void print_times_table(int n)
{
	int r, c;

	if (n > 15 || n < 0)
		return;


	for (r = 0; r <= n; r++)
	{
		for (c = 0; c <= n; c++)
		{
			int prod = r * c;

			if (c == 0)
				_putchar('0');
			else if (prod < 10) /* U */
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(prod + '0');
			}
			else if (prod < 100) /* TU */
			{
				_putchar(' ');
				_putchar(prod / 10 + '0');
				_putchar(prod % 10 + '0');
			}
			else /* HTU */
			{
				_putchar((prod / 100) + '0');
				_putchar(((prod / 10) % 10) + '0');
				_putchar((prod % 10) + '0');
			}
			if (c != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
			_putchar('\n');
	}
}
