#include "main.h"

/**
 * _islower - checks for characters in lowercase .
 *
 * @c: character to validate
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
