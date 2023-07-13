#include "main.h"
/**
* array_range - creates array range of integers
* @min: start value
* @max: final value
* Return: adress of the array
*/

int *array_range(int min, int max)
{
	int i;
	int *res;

	if (min > max)
		return (NULL);
	res = malloc(sizeof(int) * (max - min + 1));
	if (!res)
		return (NULL);
	for (i = min; i <= max; i++)
		res[i] = i;

	return (res);
}
