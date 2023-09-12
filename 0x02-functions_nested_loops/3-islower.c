#include "main.h"

/**
 * _islower - Checks for lowercase character.
 * @c: Character.
 * Return: 0 or 1.
 */
int _islower(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return 1;
	return 0;
}
