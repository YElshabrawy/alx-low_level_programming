/**
* _strncpy - copies src to dst and returns it
* @dest: str 1 (destination)
* @src: str 2
* @n: cat val
* Return: ptr to dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
