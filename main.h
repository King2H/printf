#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
/*#define UNUSED(x) (void)(x)*/
char buffer[1024];
int _putchar(char c);
int _printf(const char *format, ...);
int (*get_op_func(const char *s))(va_list);
int _print_ch(va_list c);
int _print_percnt(__attribute__((unused))va_list c);
int _print_str(va_list s);
int _print_dec(va_list d);
int _print_int(va_list i);
/**
 * struct format - Struct to define type of data and its function.
 * @type: formats
 * @f: The function associated
 * Description: structure functions
 */
typedef struct format
{
	char *type;
	int (*func_type)(va_list);
} alist;

#endif

