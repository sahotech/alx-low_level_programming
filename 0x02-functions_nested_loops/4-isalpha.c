#include "main.h"

/**
 * _isalpha - check for alphabet
 * *@c: check the character
 * return: 1 if the character is letter, lowercase oruppercase else 0
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
