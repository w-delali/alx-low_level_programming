#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: string value
 * @src: string value
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		b++;
	}
	b = 0;
	while (src[j] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a] = '\0';
	return (dest);
}
