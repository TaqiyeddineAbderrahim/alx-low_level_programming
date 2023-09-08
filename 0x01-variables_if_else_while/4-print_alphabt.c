#include <stdio.h>

/**
 * main - entry point.
 *
 * Description: Explaining the task.
 * This function prints the alphabet in lowercase except e and q,
 * and we can use putchar() maximum two times.
 *
 * Return: 0 (Just a random value to stop the program)
 */
int main(void)
{
	/* Declare and initialize the string variable low_al */
	char low_al[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
		if ((low_al[i] != 'e') && (low_al[i] != 'q'))
			putchar(low_al[i]);
	putchar('\n');

	return (0);
}
