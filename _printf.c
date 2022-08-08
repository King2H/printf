#include "main.h"
/**
 * get_op_func - get function print of format select.
 * @s: format
 * Description: select format
 * Return: function or null
 */
int (*get_op_func(const char *s))(va_list)

{
	unsigned int i = 0;
	alist sc_type[] = {
		{"s", _print_str},
		{"c", _print_ch},
		{"i", _print_int},
		{"d", _print_dec},
		{"%", _print_percnt},
		{NULL, NULL}
	};
	for (i = 0; sc_type[i].type != NULL; i++)
	{
		if (*(sc_type[i].type) == *s)
		{
			break;
		}
	}
	return (sc_type[i].func_type);
}
/**
  *_printf - print format
  *@format: input argument
  *Description: print format
  *Return: print
  */
int _printf(const char *format, ...)
{
	int scans = 0;
	int countf = 0;
	va_list funclist;
	int (*func_type)(va_list);

	if (format == NULL)
		return (-1);

	va_start(funclist, format);

	while (format[scans])
	{
		if (format[scans] != '%')
			countf += _putchar(format[scans]);
		if (format[scans] == '%')
		{
			while ((format[scans + 1]) == ' ')
				scans++;

			if (format[scans + 1] == '\0')
				return (-1);

			func_type = get_op_func(&format[scans + 1]);

			if (func_type != NULL)
			{
				countf += func_type(funclist);
				scans += 1;
			}

			else
			{
				countf += (_putchar(format[scans]));
			}
		}
		scans++;
	}
	va_end(funclist);
	return (countf);
}

