#include "main.h"

/**
 * _puts - Prints a string
 * @str: Input the string to be printed.
 *
 * Return: nothing
 */
void _puts(char *str)
{
	for(; *str != "\0"; str++)
	{
		_putchar(*str);
	}

	_putchar("\n");
}
