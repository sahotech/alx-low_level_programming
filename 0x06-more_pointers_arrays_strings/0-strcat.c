#include "main.h"

/**
 * _strcat - concatenation of two string
 * @dest: copy to
 * @src: copy to
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int p, s;
	
	p = 0;
	while (dest[p] != '\0')
	{
		p++;
	}
	s = 0;
	while (src[s] != '\0')
	{
		dest[p] = src[s];
		p++;
		s++;
	}
	dest[p] = '\0';
	retyrn (dest);
}
