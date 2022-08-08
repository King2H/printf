#include "main.h"

/**
 * _print_ch - Print char
 * @c: char of the va_list
 * Return: count + 1
 */
int _print_ch(va_list c)
{
	return (_putchar(va_arg(c, int)));
}

/**
 * _print_str - Print string
 * @s: string
 * Return: count + length
 */
int _print_str(va_list s)
{
	int i, count = 0;
	char *ptr = va_arg(s, char *);

	if (ptr == NULL)
	{
		return (write(1, "(null)", 6));
	}
	for (i = 0; ptr[i]; i++)
	{
		_putchar(ptr[i]);
		count++;
	}
	return (count);

}
/**
 * _print_percnt - function that prints percentage sign
 * @c: %
 * Return: numbers of printed chars
 */

int _print_percnt(__attribute__((unused))va_list c)
{
	return (_putchar('%'));
}
