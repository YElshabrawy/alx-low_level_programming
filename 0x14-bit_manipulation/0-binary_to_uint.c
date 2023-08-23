#include "main.h"
/**
 * binary_to_uint - from binary to decimal
 * @b: string of 0's and 1's only
 * Return: int value, 0 on error
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int val;

	if (!b)
		return (0);
	val = 0;
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		val = val * 2 + (*b++ - '0');
	}
	return (val);
}
