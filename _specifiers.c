#include "main.h"
#include <limits.h>
#include <stdlib.h>
/**
 * _putdec - Print an integer to standard output
 * @x: The integer to be printed
 * @count: The count of characters printed so far
 * Return: The updated count of characters printed.
 */

int _putdec(long int x, int count)
{
	long int d = x;

	if (x < 0)
	{
		d = -x;
		count += _putchar('-');
		/*count = count + 1;*/
	}


	if (d / 10)
	{
		count = _putdec(d / 10, count++);
	}

	_putchar(d % 10 + '0');

	return (count + 1);
}

/**
 * _string - Print a string to standard output
 * @args: The va_list containing the string to be printed
 * Return: The count of characters printed.
 */

int _string(va_list args)
{
	int __attribute__((unused)) count, sized, i;
	char *s;
	char *str = va_arg(args, char*);

	if (str == NULL)
		str = "(null)";

	sized = _strlen(str, 0);
	count = 0;

	s = malloc(sizeof(char) * sized);
	if (s == NULL)
		return (1);

	for (i = 0; i < sized; i++)
	{
		s[i] = str[i];
	}
	va_end(args);
	i = 0;
	while (str[i] != 0)
	{
		count += _putchar(str[i]);
		++i;
	}
	free(s);
	return (count);

}

/**
 * _strlen - Calculates the lenght of a string
 * @s: Pointer to the string that length will be calculated
 * @c: Counter to track the number of chars in the string
 * Return: Returns the length of the string s
 */
int _strlen(char *s, int c)
{
	if (s[c] == '\0')
	{
		return (c);
	}
	return (_strlen(s, ++c));

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
		return (0);
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
	long int dec = (long int)va_arg(args, int);

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
	long int x = (long int) va_arg(args, int);

	return (_putdec(x, 0));
}
