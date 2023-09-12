#include "main.h"

/**
 * _isalpha - Checks for alphabetic character.
 * @c: Number to pass to _isalpha function.
 * Return: 0 or 1.
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	return (0);
}
