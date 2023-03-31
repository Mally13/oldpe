#include "main.h"
/**
 * _printf - produces output according to a format.
 * @format: Character string to print - may contain directives.
 * Return: Numberof printed characters
 */
int _printf(const char *format, ...)
{
	int i, printed_chars, unknown_len;
	va_list list;

	va_start(list, format);
	for (i = 0; *(format + i); i++)
	{
		if (*(format + i) == '%')
		{
			i++;
			if (*(format + i) != '%')
			{
				unknown_len = fmt(format + i)(list);
				if (unknown_len != (-1) )
				{
					printed_chars += unknown_len;
					continue;
				}
				else
					return (-1);
					
			}

		}
		write(1, (format + i), 1);
		printed_chars++;
	}
	va_end(list);
	return (printed_chars);
}
