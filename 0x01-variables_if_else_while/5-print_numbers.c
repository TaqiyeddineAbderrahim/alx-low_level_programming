#include <stdio.h>
/**
 * main - entry point.
 *
 * Description: Explaining the task.
 * Prints all single digit numbers of base 10 starting from 0,
 * followed by a new line.
 *
 * Return: 0 (Just a random value to stop the program)
 */
int main(void)
{
	/* Declare and initialize the string variable lower_alphabet */
	int i;

	for (i = 0; i < 10; i++)
		putchar((int) i);
	putchar('\n');

	return (0);
}
