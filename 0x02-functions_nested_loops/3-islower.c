#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: first operand
 * Return: returns 1 if c is lowercase returns 0 otherwise
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
