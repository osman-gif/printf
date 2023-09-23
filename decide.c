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
		_integer, hexa, heXa, addr, oct, binary, percent};
	const char specifiers[] = "scdixXpob%";

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
 * oct - Convert a decimal to octal
 * @arg: Decimal number to be converted
 * Return: Return count of printed characters
 */

int oct(va_list arg)
{
	unsigned int x = va_arg(arg, unsigned int);

	return (putoct(x, 0));
}

/**
 * addr - prints address of a variable
 * @arg: variable whose address is to be printed
 * Return: Returns count of digit printed
 */
int addr(va_list arg)
{
	void *address = va_arg(arg, void *);
	if (address == NULL)
		return (1);
	unsigned long iaddress = (unsigned long)address;

	_putchar('0');
	_putchar('x');
	return (puthexadd(iaddress, 0) + 2);
}

/**
 * binary - Convert a decimal to binary number
 * @arg: The deciaml number that will be converted to binary
 * Return: Returns the counts of digits printed
 */
int binary(va_list arg)
{
	unsigned int x = va_arg(arg, unsigned int);

	return (put_binary(x, 0));
}

