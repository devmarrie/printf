#include <stdarg.h>
#include <stddef.h>

/**
*Prints a formarted string
*@formart -prints a(char*)
*@... - unknown variadic arguments
*/

int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	int value = 0;
	va_list args;
	va_start(args, format);
	int (*f)(va_list);
	
	/*Prevent parsing a null pointer*/
	if (format == NULL)
		return (-1);
	
	/*Print each character of string*/
	while (format[i])
	{	
		if (format[i] != '%')
		{
			value = write(1,&format[i],1);
			count = count + value;
			i++;
			continue;
		}

		if (format[i] == '%')
		{
			f = check_specifier(&format[i + 1]);
			if (f != NULL)
			{
				value = f(args);
				count = count + value;
				i = i + 2;
				continue;
			}

			if (format[i + 1] == '\0')
			{
				break;
			}

			if (format[i + 1] != '\0')
			{
				value = write(1, &format[i + 1], 1);
				count = count + value;
                        	i = i + 2;
                        	continue;
			}


		}
	}

	return (count);         
}
