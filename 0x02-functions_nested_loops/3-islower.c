#include "main.h"

/**
 * is_lower - Checks for lowercase character.
 * @c: Character.
 * Return: 0 or 1.
 */
int is_lower(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return 1
	return 0;
}
