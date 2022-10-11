#include <stdio.h>
#include <stdlib.h>

/**
 * main - funtion to print the file from which the program is called
 * Return: always returns 0
 *
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
