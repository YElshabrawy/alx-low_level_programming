/**
 * print_sign - check sign
 * @n: int to be checked
 * Return: 1 if n is +, -1 if n is -, 0 otherwise
*/

int print_sign(int n)
{
	if (n > 0)
		return (1);
	if (n < 0)
		return (-1);
	return (0);
}
