#include <stdio.h>
#include "main.h"

/**
 * string_toupper - name of the function
 * @a: pointer to array
 * Return: new value of a pointer
 */

char *string_toupper(char *a)
{
	int b;

	for (b = 0; a[b] != '\0'; b++)
	{
		if (a[b] >= 97 && a[b] <= 122)
			a[b] = a[b] - 32;
	}
	return (a);
}

