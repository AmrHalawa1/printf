#include "main.h"

/**
 * get_precision - Calculates thprecision for printing
 * @format: Formatted string in  to print the arguments
 * @i: Listnts to be printed.
 * @list: list of arguments.
 *
 * Return: Precision.ww
 */
int get_precision(const char *format, int *i, va_list list)

{	int curr_k = *i + 1;
	int precisio = -1;

	if (format[curr_k] != '.')
		return (precisio);
	precisio = 0;

	for (curr_k += 1; format[curr_k] != '\0'; curr_k++)
	{
		if (is_digit(format[curr_k]))
		{
			precisio *= 10;
			precisio += format[curr_k] - '0';

		}
		else if (format[curr_k] == '*')
		{
			curr_k++;
			precisio = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*i = curr_k - 1;

	return (precisio);
}
