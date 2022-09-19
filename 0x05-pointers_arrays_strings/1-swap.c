#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: An integer/pointer to be swapped
 * @b: Another integer/pointer to be swapped
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int isong;

	isong = *a;
	*a = *b;
	*b = isong;
}
