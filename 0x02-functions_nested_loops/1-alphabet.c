#include "main.h"

/**
 *
 * Write a function that prints the alphabet, in lowercase, followed by a \n.
 *
 */
void print_alphabet(void)
{
	char low_al;

	for (low_al = 'a'; low_al = 'z'; low_al++)
		_putchar(low_al);
	_putchar('\n');
}
