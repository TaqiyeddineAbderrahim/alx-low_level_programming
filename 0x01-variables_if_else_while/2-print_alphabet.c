#include <stdio.h>
/**
 * main - entry point.
 *
 * Description: Explaining the task.
 * This function prints the alphabet in lower case using the fucntion
 * putchar() two times at max.
 *
 * Return: 0 (Just a random value to stop the program)
 */
int main(void)
{
	/* Declare and initialize the string variable lower_alphabet */
	char lower_alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
		putchar(lower_alphabet[i]);
	putchar("\n")

	return (0);
}
