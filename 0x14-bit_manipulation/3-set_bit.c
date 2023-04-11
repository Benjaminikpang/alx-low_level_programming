#include "main.h"
/**
 * set_bit - set the value of a given index
 * @n: bit pointer
 * @index: value of index
 * Return: -1 if error occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n = (1 << index);
	return (1);
}
