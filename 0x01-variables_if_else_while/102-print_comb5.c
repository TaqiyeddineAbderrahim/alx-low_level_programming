#include <stdio.h>

/**
 * main - entry point.
 *
 * Description: Explaining the task.
 * Prints all possible different combinations of
 * two two-digit numbers.
 *
 * Return: 0 (Just a random value to stop the program)
 */
int main(void)
{
	/* Declare and initialize the variables */
	int i, j;

	for (i = 0; i <= 98; i++)
		for (j = i + 1; j <= 99; j++)
		{
			putchar('0' + i / 10);
			putchar('0' + i % 10);
			putchar(' ');
			putchar('0' + j / 10);
			putchar('0' + j % 10);
			if ((i == 98) && (j == 99))
				continue;
			putchar(',');
			putchar(' ');
		}

	putchar('\n');

	return (0);
}
