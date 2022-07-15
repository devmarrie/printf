#include "main.h"

/**
 * buff_append - Concatenates the buffer characters
 * @buff_dest: buffer destination
 * @arg: pointer to va_arg return
 * @print_char: pointer to print_char function
 * Return: index of buffer pointer
 */

int buff_append(char *buff_dest, va_list arg, int buff_count, char type)
{
	switch (type)
	{
		case 'c':

			buff_dest[buff_count] = 'b';
			buff_count++;


			return (buff_count);

		case 's':

			print_str(buff_dest, arg, buff_count);

			break;
	}
	return (0);
}
