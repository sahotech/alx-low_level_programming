#include "main.h"

/**
 * _strlen - return the length of string
 * @s: string to evaluate
 * Return: The lenght of a string
 */

int _strlen(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
