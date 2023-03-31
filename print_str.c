#include "main.h"

/**
 * print_str - Prints a string.
 * @list: A va_list pointing to the string to be printed.
 */
int print_str(va_list list)
{
	char *str;
	int i = 0;

	str = va_arg(list, char *);

	for (i = 0; *(str + i); i++)
		write(1, (str + i), 1);
	return (i);
}
