#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet x10, in lowercase,
 * followed by an \n.
 */
void print_alphabet_x10(void)
{
	char low_al;
	int i = 0;

	while (i < 10)
	{
		for (low_al = 'a'; low_al <= 'z'; low_al++)
			_putchar(low_al);
		_putchar('\n');
		i++;
	}
}
