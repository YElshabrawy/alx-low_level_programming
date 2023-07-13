#include "main.h"
/**
* _calloc - alloc memory
* @nmemb: number
* @size: size of each entry
* Return: pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;

	char *res = malloc(nmemb * size);
	if(!res || nmemb == 0 || size == 0)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		res[i] = 0;
	return (res);
}
