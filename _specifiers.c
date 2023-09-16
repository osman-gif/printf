#include "main.h"
#include <limits.h>
#include <stdlib.h>
/**
 * _putdec - Print an integer to standard output
 * @x: The integer to be printed
 * @count: The count of characters printed so far
 * Return: The updated count of characters printed.
 */

int _putdec(int x, int count)
{
	int d = x;

	if (x < 0)
	{
		d = -x;
		count += _putchar('-');
		count = count + 1;
	}

	if (d / 10)
	{
		count = _putdec(d / 10, count);
	}

	count += _putchar(d % 10 + '0');
	return (count + 1);

}

/**
 * _string - Print a string to standard output
 * @args: The va_list containing the string to be printed
 * Return: The count of characters printed.
 */

int _string(va_list args)
{
	int count;
	char *str = va_arg(args, char*);

	count = 0;
	while (*str)
	{
		count = _putchar(*str);
		str++;
	}
	return (count);

}

/**
 * _char - Print a character to standard output
 * @args: The va_list containing the character to be printed
 * Return: Always 1
 */

int _char(va_list args)
{
	char ch = va_arg(args, int);

	if (ch == '%')
		return (1);
	return (_putchar(ch));
}

/**
 * _decimal - Print an integer as a decimal to standard output
 * @args: The va_list containing the integer to be printed
 * Return: The count of characters printed.
 */

int _decimal(va_list args)
{
	int count = 0;

	int dec = va_arg(args, int);

	count = _putdec(dec, 0);

	return (count);
}

/**
 * _integer - Print an integer to standard output
 * @args: The va_list containing the integer to be printed
 *
 * Description: This function takes an integer from the va_list and uses the
 *		_putdec function to print it to the standard output.
 *
 * Return: The count of characters printed.
 */

int _integer(va_list args)
{
	int x = va_arg(args, int);

	return (_putdec(x, 0));
}
