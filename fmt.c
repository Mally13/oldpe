#include "main.h"
/**
 * fmt - matches symbol with corresponding function
 * @symbol: symbol found
 * Return: function pointer to function that matches symbol
 */
int (*fmt(const char *symbol))(va_list list)
{
	fmt_t converters[] = {
		{"c", print_char},
		{"s",  print_str}
	};
	int i;

	for (i = 0; i < 2; i++)
	{
		if (*symbol == *(converters[i].specifier))
			return (converters[i].func);
	}
	return (NULL); 
}
