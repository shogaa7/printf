#include "main.h"
/**
 * get_precision - get the precision from the format string
 * @p: the format strings
 * @params: the parameters structure
 * @ap: the argument pointer
 *
 * Return:a new pointer
 */
char *get_precision(char *p, params_t *params, va_list ap)
{
	int d = 0;

	if (*p != '.')
		return (p);
	p++;
	if (*p == '*')
	{
		d = va_arg(ap, int);
		p++;
	}
	else
	{
		while (_isdigit(*p))
			d = d * 10 + (*p++ - '0');
	}
	params->precision = d;
	return (p);
}
