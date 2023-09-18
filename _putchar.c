#include "main.h"
#include <limits.h>
/**
 * _putchar - Writes a character to standard output
 * @c: The character to be written
 *
 * Description: This function writes a single character to the standard output
 *              (usually the console) using the write system call.
 *
 * Return: On success, 1 is returned. On error, -1 is returned.
 */

int _putchar(int c)
{
	return (write(1, &c, 1));
}

/**
 * percent - prints a % symbol
 * @args: symbol to be printed
 * Return: return 1
 */
int percent(va_list __attribute__((unused)) args)
{
	return (_putchar('%'));
}

/**
 * _isdigit - checks of a digit character
 * @c: character to be checked
 * Return: 1 if digit 0 otherwise
 */

int _isdigit(int c)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
