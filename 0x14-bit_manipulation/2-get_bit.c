#include "main.h"
/**
 * get_bit - get the bit value
 * @n: bit
 * @index: index to get the value
 * Return: -1 if error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);
	return (1);
}
