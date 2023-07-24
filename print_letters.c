#include "main.h"

/**
 * print_string - Prints all char
 * @l: va_list
 * @f: flags_t
 * Return: int
 */
int print_string(va_list l, flags_t *f)
{
	char *s = va_arg(l, char *);

	(void)f;

	if (!s)
		s = "(null)";
	return (_puts(s));
}

/**
 * print_char - Prints a char
 * @l: va_list
 * @f: flags_t
 * Return: int
 */
int print_char(va_list l, flags_t *f)
{
	(void)f;
	_putchar(va_arg(l, int));
	return (1);
}
