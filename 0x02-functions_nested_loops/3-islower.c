#include"main.h"
/**
 * _islower - checks if the char is lowercase
 * Description: Similat to std islower()
 * Return: 1 if c is lowecase, 0 if it is not
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
