/**
 * swap_int - swaps 2 ints
 * @a: int 1 adress
 * @b: int 2 address
 * Return: void
*/

void swap_int(int *a, int *b)
{
	int tmp = *b;
	*b = *a;
	*a = tmp;
}
