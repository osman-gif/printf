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
int unsign(va_list arg)
{
	long int li;
	int n = va_arg(arg, unsigned);
	
	li = 0;
	if (n < 0)
	{
		n = -n;
		li = n;
	}
	printf("--%u\n",(unsigned int)INT_MAX + 1024);
	return (_putdec(li, 0));
}
