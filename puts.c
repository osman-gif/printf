#include "main.h"

/**
 * putoct - prints an octal representation of a integer number
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
 * puthex - prints a hexadecimal representation of a integer number
 * @n: Decimal number to be converted
 * @count: number of digit printed
 * Return: Return count of printed digit
 */

int puthex(unsigned int n, int count)
{
	if (n < 10)
	{
		_putchar(n + 48);
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
 * putheX - prints a hexadecimal representation of a integer number
 * @n: Decimal number to be converted
 * @count: number of digit printed
 * Return: Return count of printed digit
 */
int putheX(unsigned int n, int count)
{
	if (n < 10)
	{
		_putchar(n + 48);
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
 * puthexadd - prints a hexadecimal representation of a integer number
 * @n: Decimal number to be converted
 * @count: number of digit printed
 * Return: Return count of printed digit
 */
int puthexadd(unsigned long n, int count)
{
	if (n < 10)
	{
		_putchar(n + 48);
	}

	if (n / 16 != 0)
	{
		count = puthexadd(n / 16, count);
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
 * put_binary - prints binary representation of a decimal
 * @i: decimal number that the function prints it binary representation
 * @count: count of the digits printed
 * Return: Reurns the count of printed digits
 */
int put_binary(unsigned int i, int count)
{
	if (i / 2 != 0)
		count = put_binary(i / 2, count++);
	_putchar(i % 2 + 48);
	return (count + 1);
}

