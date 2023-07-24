#include "main.h"

/**
 * parse - Parse all into string
 * @num: unsigned long int
 * @base: int
 * @lowercase: int
 * Return: char
 */
char *parse(unsigned long int num, int base, int lowercase)
{
	static char *rep;
	static char buffer[50];
	char *ptr;

	rep = (lowercase)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '\0';
	do {
		*--ptr = rep[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}
