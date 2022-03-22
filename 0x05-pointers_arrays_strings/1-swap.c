#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 * return: always 0.
 */

void swap(int *a, int *b)
{
	int inter;
	inter = *a;
	*a = *b;
	*b = inter;

}
