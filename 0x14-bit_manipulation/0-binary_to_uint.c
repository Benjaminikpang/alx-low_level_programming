#include "main.h"
#include <stddef.h>
/**
 * binary_to_unit - converts binary to unsigned int
 * @b: binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0, d = 1;
	int y;

	if (b == NULL)
		return (0);
	for (y = 0; b[y];)
		y++;
	for  (y -= 1; y >= 0; y--)
	{
		if (b[y] != '0' && b[y] != '1')
			return (0);
		number += (b[y] - '0') * d;
		d *= 2;
	}
	return (number);
}
