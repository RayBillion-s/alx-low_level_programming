#include "main.h"

/**
*_puts_recursion - prints' s a atring followed by a new line
*@s: string to be printed
*
*Return: void
*/
void _puts_recursion(char *s);
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}


