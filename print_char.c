#include "main.h"
/**
 * print_char - prints a character
 * @list: A va_list pointing to the character to print
 */
int print_char(va_list list)
{
	char c, *c_pointer;

	c = va_arg(list, int);
	c_pointer = &c;
	return (write(1, c_pointer, 1));
}
