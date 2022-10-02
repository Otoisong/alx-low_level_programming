#include <stdio.h>

/**
 * main - Prints the name of arguments passed to it.
 * @argc: number of argument passed to the function
 * @argv: argument vector pointers to strings.
 *
 * Return: Always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
