#include <stdio.h>
#include "main.h"

/**
 * print_array - name of the function
 * @a: pointer of ingrese
 * @n: ubication of the array
 * Return: none
 */

void print_array(int *a, int n)
{
	int z;

	if (n > 0)
	{
		for (z = 0; n > z; z++)
		{
			if (z != n - 1)
				printf("%d, ", a[z]);

			else
				printf("%d", a[z]);
		}
	}
	printf("\n");
}

