#include "main.h"

/**
 * get_print - Define the right printing function
 * @s: char
 * Return: int
 */
int (*get_print(char s))(va_list, flags_t *)
{
	ph functions_array[] = {
		{'i', print_int},
		{'s', print_string},
		{'c', print_char},
		{'d', print_int},
		{'u', print_unsigned},
		{'x', print_hex},
		{'X', print_hex_big},
		{'b', print_binary},
		{'o', print_octal},
		{'R', print_rot13},
		{'r', print_rev},
		{'S', print_bigS},
		{'p', print_address},
		{'%', print_percent}
		};
	int flags = 14;

	register int i;

	for (i = 0; i < flags; i++)
		if (functions_array[i].c == s)
			return (functions_array[i].f);
	return (NULL);
}
