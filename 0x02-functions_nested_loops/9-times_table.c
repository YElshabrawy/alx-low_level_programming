#include"main.h"
/**
 * times_table - prints 9x9 table
 * Return: void
*/

void times_table(void)
{
	int r, c;

	for (r = 0; r <= 9; r++)
	{
		for (c = 0; c <= 9; c++)
		{
			int n = r * c;

			if (n > 9)
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
				if (c != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar(n + '0');
				if (c != 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
		}
			if (r != 9)
				_putchar('\n');
	}
}
