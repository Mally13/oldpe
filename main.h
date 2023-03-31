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
	char *specifier;
	int (*func)(va_list list);
}fmt_t;

/* function prototypes */
int _printf(const char *format, ...);

/* Funtions to print chars and strings */
int (*fmt(const char *))(va_list list);
int print_char(va_list list);
int print_str(va_list list);
#endif
