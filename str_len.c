#include "main.h"


int str_len(char *s)
{
	int count = 0;
	while (*(s + count) != '\0')
		count++;
	return (count);
}
