#include "main.h"
/**
 * fmt - matches symbol with corresponding function
 * @symbol: symbol found
 * Return: function pointer to function that matches symbol
 */
void (*fmt(const char *symbol))(va_list list)
{
	fmt_t func[] = {
		{"c", print_char},
		{"s",  print_str}
	};
	int i;

	for (i = 0; i < 2; i++)
	{
		if (*symbol == *(func[i].letter))
			return (func[i].f);
	}
	write(2, "conversion specifier lacks type at end of format", 48);
	exit(1);
}
