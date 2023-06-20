#include"main.h"
/**
 * _islower - check if lowercase
 * Description: check if lowercase
 * Return: 0 id not, 1 if is
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
