#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * typedef struct fmt fmt_t - Struct op
 *
 * @fmt: The format.
 * @fm_t: The function associated.
 */
typedef struct fmt{
	char *letter;
	void (*f)(va_list list);
}fmt_t;

/* function prototypes */
int _printf(const char *format, ...);

/* Funtions to print chars and strings */
void (*fmt(const char *))(va_list list);
void print_char(va_list list);
void print_str(va_list list);
#endif
