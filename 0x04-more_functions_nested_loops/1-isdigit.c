#include "main.h"

/**
 * _isdigit - check if a character is alphabetic.
 * *@c: check the character.
 * Return: 1 if the character is letter, lowercase or uppercase,  0 otherwise.
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
