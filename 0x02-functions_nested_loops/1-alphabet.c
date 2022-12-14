#include "main.h"
/**
 * main - Entry point
 * Description - print out alphabet in lowercase
 * return - 0 always
 */

void print_alphabet(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++);
	{
		_putchar(c);
	}
	_putchar('\n');
}
