#include "main.h"

/**
 * _strcat - concatenates two string
 * @dest: copy to
 * @src: copy from
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int p;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	p = 0;
	while (src[p] != '\0')
	{
		dest[i] = src[p];
		i++;
		p++;
	}
	dest[i] = '\0';
	return (dest);
}
