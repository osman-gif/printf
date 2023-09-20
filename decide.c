#include "main.h"

/**
 * decision - Decide which function to use based on specifier
 * @d: The specifier character to determine the function
 *
 * Description: This function takes a specifier character and determines
 *              which function to use based on the specifier
 *
 * Return: A function pointer based on the specifier or NULL.
 */

int (*decision(char d))(va_list)
{
	int i;
	int (*func[])(va_list) = {_string, _char, _decimal,
		_integer, hexa, heXa, addr, oct, percent};
	const char specifiers[] = "scdixXpo%";

	for (i = 0; specifiers[i]; i++)
	{
		if (d == specifiers[i])
		{
			return (func[i]);
		}
	}

	return (NULL);
}

/**
 * putheX - prints a hexadecimal representation of a integer number
 * @n: Decimal number to be converted
 * @count: number of digit printed
 * Return: Return count of printed digit
 */
int putheX(unsigned int n, int count)
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
				_putchar('A');
				break;
			case 11:
				_putchar('B');
				break;
			case 12:
				_putchar('C');
				break;
			case 13:
				_putchar('D');
				break;
			case 14:
				_putchar('E');
				break;
			case 15:
				_putchar('F');
				break;
			default:
				_putchar(n % 16 + 48);
				break;
		}
	}

	return (count + 1);
}

/**
 * puthex - prints a hexadecimal representation of a integer number
 * @n: Decimal number to be converted
 * @count: number of digit printed
 * Return: Return count of printed digit
 */

int puthex(unsigned int n, int count)
{
	if (n < 10)
	{
		count += _putchar(n + 48);
	}

	if (n / 16 != 0)
	{
		count = puthex(n / 16, count);
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

/**
 * putheX - prints an octal representation of a integer number
 * @n: Decimal number to be converted
 * @count: number of digit printed
 * Return: Return count of printed digit
 */

int putoct(unsigned int n, int count)
{
	if (n >= 8)
	{
		count = putoct(n / 8, count);
	}
	_putchar(n % 8 + 48);
	return (count + 1);
}

/**
 * oct - Convert a decimal to octal
 * @arg: Decimal number to be converted
 * Return: Return count of printed characters
 */

int oct(va_list arg)
{
	unsigned int x = va_arg(arg, unsigned int);

	return (putoct(x, 0));
}
