#include <stdio.h>

/**
 * main - entry point.
 *
 * Description: Explaining the task.
 * Prints all possible different combinations of three digits.
 *
 * Return: 0 (Just a random value to stop the program)
 */
int main(void)
{
	/* Declare and initialize the variables*/
	int i, j, k;

	for (i = 0; i < 10; i++)
		for (j = 0; j < 10; j++)
			for (k = 0; k < 10; k++)
			{
				if ((i == j) && (j  == k))
					continue;
				if ((i < j) && (j < k))
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + k);
					if ((i * j * k) == 504)
						break;
					putchar(',');
					putchar(' ');
				}
			}

	putchar('\n');

	return (0);
}
