#include "main.h"

/**
 * _puts - Prints a string
 * @str: Input the string to be printed.
 *
 * Return: nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
