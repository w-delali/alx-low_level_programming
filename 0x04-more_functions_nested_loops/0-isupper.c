#include "main.h"

/**
 * _isupper - checks uppercase letters
 * @c: char to check
 *
 * Return: 0 or 1
 */

int _isupper(int alp)
{
	if (alp >= 'A' && alp <= 'Z')
		return (1);
	else
		return (0);
}

