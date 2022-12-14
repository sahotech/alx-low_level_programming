#include "main.h"

/**
 *_islower: function that check for lowercase 
 * c - is the int that check for the argument of the function
 * return : 0 or 1
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}

