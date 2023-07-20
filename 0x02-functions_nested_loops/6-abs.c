#include "main.h"

/**
 * _abs - Compute the absolete value of an integer
 * @c: The number to be computed
 * Return: Absolete value of number or zero
 */

int _abs(int c)
{

	if (c < 0)
	{
	int abs_va1;

	abs_va1 = c * -1;
	return (abs_va1);
	}
	return (c);
}
