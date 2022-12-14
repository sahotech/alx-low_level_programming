#include "main.h"

/**
 * _islower - check for alphabet
 * *@c: check the character
 * return : 1 if the char the is 1 or 0
 */
int _isalpha(int c)
{
if (( c >= 'a' && c <= 'z') ||
(c >= 'A' && <= 'Z'))
return (1);
else
return (0);
}
