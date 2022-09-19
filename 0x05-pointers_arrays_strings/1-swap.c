#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: a pointer to an int that will be swapped
 * @b: a pointer to another int that will be swapped
 * Return: void which means our answer is correct
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;


	*a = *b;
	*b = tmp;
}
