#include <stdio.h>
#include "main.h"

/**
 * cap_string - name of the function
 * @a: pointer to array
 * Return: new value of array in pointer a
 */

char *cap_string(char *a)
{
	int b = 0;

	for (; a[b] != '\0'; b++)
	{
		if (a[0] >= 97 && a[0] <= 122)
		a[0] = a[0] - 32;

		if ((a[b] >= 32 && a[b] <= 34) || a[b] == '\t' ||
		a[b] == '\n' || a[b] == 44 || a[b] == 59 ||
		a[b] == 46 || a[b] == 63 || a[b] == 40 ||
		a[b] == 41 || a[b] == 123 || a[b] == 125)
		{
			if (a[b + 1] >= 97 && a[b + 1] <= 122)
				a[b + 1] = a[b + 1] - 32;
		}
	}
	return (a);
}

