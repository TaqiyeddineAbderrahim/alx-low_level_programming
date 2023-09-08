#include <stdio.h>

/**
 * main - entry point.
 *
 * Description: Explaining the task.
 * Prints all possible combinations of single-digit numbers.
 *
 * Return: 0 (Just a random value to stop the program)
 */
int main(void)
{
	/* Declare and initialize the string variable lower_alphabet */
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(48 + i);	/* 0-9 range in the ASCII Table */
		if (i == 9)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
