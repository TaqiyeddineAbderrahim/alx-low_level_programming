#include <stdio.h>

/**
 * main - entry point.
 *
 * Description: Explaining the task.
 * Prints all single digit numbers of base 16 starting from 0,
 * Using only putchar() (x2 maximum), followed by a new line.
 *
 * Return: 0 (Just a random value to stop the program)
 */
int main(void)
{
	/* Declare and initialize the string variable lower_alphabet */
	int i;
	char hexEquiv;

	for (i = 0; i < 10; i++)
		putchar(48 + i);	/* 0-9 range in the ASCII Table */

	for (hexEquiv = 'a'; hexEquiv <= 'f'; hexEquiv++)
		putchar(hexEquiv);

	putchar('\n');

	return (0);
}
