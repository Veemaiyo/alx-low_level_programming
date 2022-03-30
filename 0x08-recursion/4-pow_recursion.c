#include "main.h"

/**
 * _pow_recursion - name of the function
 * @x: value
 * @y: number to power at x
 * Return: result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}

