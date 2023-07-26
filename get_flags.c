#include "main.h"


/**
 * get_flags - Calculates aclags
 * @format: Formattiwhich to print the arguments
 * @i: take a parame.
 * Return: Flags:
 */

int get_flags(const char *format, int *i)

{
	int k, curr_k;
	int flag = 0;

	const char FLAG_CH[] = {'-', '+', '0', '#', ' ', '\0'};
	const int FLAG_ARR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

	for (curr_k = *i + 1; format[curr_k] != '\0'; curr_k++)
	{
		for (k = 0; FLAG_CH[k] != '\0'; k++)
		if (format[curr_k] == FLAG_CH[k])
		{
			flag |= FLAG_ARR[k];
			break;
		}
			if (FLAG_CH[k] == 0)
				break;
	}
	*i = curr_k - 1;
	return (flag);
}
