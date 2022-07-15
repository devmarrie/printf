#include "main.h"

/**
 * print_buff - prints the buffer
 * @b: the buffer pointer
 * @nb: number of bytes to print
 * Return: number of bytes printed
 */

int print_buff(char *b, unsigned int nb)
{
	return (write(1, b, nb));
}
