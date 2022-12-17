#include "main.h"

/**
 * print_most_numbers - print numbers
 */

void print_most_numbers(void)
{
int i;
for (i = 48; i < 58; i++)
{
if (i != 32 && i != 52)
{
_putchar(i);
}
}
putchar('\n');
}
