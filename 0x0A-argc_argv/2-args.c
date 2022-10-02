#include <stdio.h>

/**
 * main - Prints all arguments it receives.
 * @argc: number of argument passed to function
 * @argv: argument vector of pointers to strings
 *
 * REturn: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
