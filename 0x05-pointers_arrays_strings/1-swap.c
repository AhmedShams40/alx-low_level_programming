#include "main.h"
/**
 * swap_int - takes a pointer to a parameter and updates its value.
 * @a: first integer.
 * @b: second integer.
 * Return: no return.
 */

void swap_int(int *a, int *b)
{
	int temp1 = *a;
	int temp2 = *b;
	*a = temp2;
	*b = temp1;
}
