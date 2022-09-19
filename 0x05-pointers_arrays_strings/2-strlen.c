#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: Lenght of string to be counted
 *
 * /
int _strlen(char *s)
{
	int m = 0;

	while (*s != '\0')
	{
		s++;
		m++;
	}
	return (m);
}
