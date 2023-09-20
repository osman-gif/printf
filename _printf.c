#include "main.h"
/**
 * _printf - Custom printf function implementation
 * @format: The format string containing placeholders
 * @...: Additional arguments for placeholders
 *
 * Description: This function simulates the behavior of the printf function
 *
 * Return: The total count of characters printed.
 */


int _printf(const char *format, ...)
{
	int cnt = 0;
	int i = 0;
	va_list args;

	va_start(args, format);

	while (format[i] != '\0')
	{
		cnt++;
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
			}
			if (format[i + 1] != '\0')
			{
				int (*function)(va_list) = decision(format[i + 1]);

				if (function != NULL)
				{
					/*cnt +=*/
					function(args);
					i++;
				}
				else
				{
					_putchar(format[i]);
					/*cnt++;*/
				}
			}
		}
		else
		{
			_putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (cnt);
}

/**
 * addr - prints address of a variable
 * @arg: variable whose address is to be printed
 * Return: Returns count of digit printed
 */
int addr(va_list arg)
{
	void *address = va_arg(arg, void *);
	unsigned long iaddress = (unsigned long)address;

	return (puthexadd(iaddress, 0));
}

/**
 * puthexadd - prints a hexadecimal representation of a integer number
 * @n: Decimal number to be converted
 * @count: number of digit printed
 * Return: Return count of printed digit
 */
int puthexadd(unsigned long n, int count)
{
	if (n < 10)
	{
		count += _putchar(n + 48);
	}

	if (n / 16 != 0)
	{
		count = putheX(n / 16, count);
	}

	if (n > 9)
	{
		switch (n % 16)
		{
			case 10:
				_putchar('a');
				break;
			case 11:
				_putchar('b');
				break;
			case 12:
				_putchar('c');
				break;
			case 13:
				_putchar('d');
				break;
			case 14:
				_putchar('e');
				break;
			case 15:
				_putchar('f');
				break;
			default:
				_putchar(n % 16 + 48);
				break;
		}
	}

	return (count + 1);
}

