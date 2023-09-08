#include <stdio.h>

/**
 * main - entry point.
 *
 * Description: Explaining the task.
 * Prints all possible different combinations of two digits.
 *
 * Return: 0 (Just a random value to stop the program)
 */
int main(void)
{
	/* Declare and initialize the variables*/
	int i, j;

	for (i = 0; i < 10; i++)
		for (j = 0; j < 10; j++)
			if (i == j)
				continue;
			else if (i < j)
			{
				putchar('0' + i);
				putchar('0' + j);
				if ((i != 8) && (j != 9))
				{
					putchar(',');
					putchar(' ');
				}
			}

	putchar('\n');

	return (0);
}
