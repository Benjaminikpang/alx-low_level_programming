#include "main.h"
/**
 * clear_bit - bit value
 * @n: bit pointer
 * @index: index value
 * Return: -1 if error occurs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
