#include <stdio.h>
/**
 * main - entry point.
 *
 * Description: Explaining the task.
 * This function prints the alphabet in lowercase then in uppercase
 * followed by a newline, using the fucntion putchar() two times at max.
 *
 * Return: 0 (Just a random value to stop the program)
 */
int main(void)
{
	/* Declare and initialize the string variable lowup_alphabet */
	char lowup_alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
		putchar(lowup_alphabet[i]);
	putchar('\n');

	return (0);
}
