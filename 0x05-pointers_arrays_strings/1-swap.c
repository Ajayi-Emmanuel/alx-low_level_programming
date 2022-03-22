#include <stdio.h>
#include "main.h"

/**
 * swap_int - swap the values of 2 integers
 *
 * @a: pointer to an int
 * @b: pointer to other int
 * Return: 0 (Nothing)
 */

void swap_int(int *a, int *b)
{
	int inter;

	inter = *a;
	*a = *b;
	*b = inter;
}

