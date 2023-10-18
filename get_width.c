#include "main.h"

/**
 * get_width - Calculates the width.
 * @format: The formatted string.
 * @i: List of arguments.
 * @list: List of arguments.
 *
 * Return:width.
 */
int get_width(const char *format, int *i, va_list list)
{
	int present_i = *i + 1;
	int width = 0;

	while (format[present_i] != '\0')
	{
		if (is_digit(format[present_i]))
		{
			width *= 10;
			width += format[present_i] - '0';
		}
		else if (format[present_i] == '*')
		{
			present_i++;
			width = va_arg(list, int);
			break;
		}
		else
		{
		break;
		}
		present_i++;
	}
	*i = present_i - 1;

	return (width);
}
