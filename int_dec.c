#include "main.h"
<<<<<<< HEAD
/**
* _print_dec - print d
* @d: integer
* Return: count
*/
=======

/**
 * _print_dec - print d
 * @d: integer
 * Return: count
 */
>>>>>>> acfd0f1dfecabc411eaa6af8bac83b93a4ec28eb
int _print_dec(va_list d)
{
	int dig[10];
	int i, pow, num, sum, count;

	num = va_arg(d, int);
	count = 0;
	pow = 1000000000;
	dig[0] = num / pow;
	for (i = 1; i < 10; i++)
	{
		pow /= 10;
		dig[i] = (num / pow) % 10;
	}
	if (num < 0)
	{
		_putchar('-');
		count++;
		for (i = 0; i < 10; i++)
			dig[i] *= -1;
	}
	for (i = 0, sum = 0; i < 10; i++)
	{
		sum += dig[i];
		if (sum != 0 || i == 9)
		{
			_putchar(dig[i] + '0');
			count++;
		}
<<<<<<< HEAD

=======
>>>>>>> acfd0f1dfecabc411eaa6af8bac83b93a4ec28eb
	}
	return (count);
}
/**
<<<<<<< HEAD
* _print_int - print integer
* @i: integer
* Return: count
*/
=======
 * _print_int - print integer
 * @i: integer
 * Return: count
 */
>>>>>>> acfd0f1dfecabc411eaa6af8bac83b93a4ec28eb
int _print_int(va_list i)
{
	int dig[10];
	int j, pow, num, sum, count;

	num = va_arg(i, int);
	count = 0;
	pow = 1000000000;
	dig[0] = num / pow;
	for (j = 1; j < 10; j++)
	{
		pow /= 10;
		dig[j] = (num / pow) % 10;
	}
	if (num < 0)
	{
		_putchar('-');
		count++;
		for (j = 0 ; j < 10; j++)
			dig[j] *= -1;
	}
	for (j = 0, sum = 0; j < 10; j++)
	{
		sum += dig[j];
		if (sum != 0 || j == 9)
		{
			_putchar(dig[j] + '0');
			count++;
		}
<<<<<<< HEAD

=======
>>>>>>> acfd0f1dfecabc411eaa6af8bac83b93a4ec28eb
	}
	return (count);
}

<<<<<<< HEAD

=======
>>>>>>> acfd0f1dfecabc411eaa6af8bac83b93a4ec28eb
