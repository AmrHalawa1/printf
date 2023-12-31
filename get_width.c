#include "main.h"
/**
 * get_width - Calculates the width for printing
 * @format: Formatted string in which to print the arguments.
 * @i: List of arguments to be printed.
 * @list: list of arguments.
 *
 * Return: width.
 */

int get_width(const char *format, int *i, va_list list)
{
	int curr_l;
	int width = 0;

	for (curr_l = *i + 1; format[curr_l] != '\0'; curr_l++)
	{
		if (is_digit(format[curr_l]))
		{	width *= 10;
			width += format[curr_l] - '0';
		}
		else if (format[curr_l] == '*')
		{
			curr_l++;
			width = va_arg(list, int);
			break;
		}
		else
		break;
	}
	*i = curr_l - 1;
	return (width);
}
