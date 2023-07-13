#include "main.h"
#include <string.h>
/**
* string_nconcat - cat 2 strings
* @s1: string 1
* @s2: string 2
* @n: n bytes from s2
* Return: new string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res;
	unsigned int i = 0, len1 = 0, len2 = 0, len;

	if (s1)
		len1 = strlen(s1);
	if (s2)
		len2 = strlen(s2);
	if (n >= len2)
	{
		len = len1 + len2;
		n = len2;
	}
	else
		len = len1 + n;
	res = malloc((sizeof(char) * len) + 1);
	if (!res)
		return (NULL);
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	for (i = 0; i < n; i++)
		res[i + len1] = s2[i];
	res[i + len1] = '\0';

	return (res);
}
