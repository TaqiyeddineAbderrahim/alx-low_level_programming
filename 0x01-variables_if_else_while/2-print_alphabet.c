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
	lower_alphabet = "abcdefghijklmnopqrstuvwxyz";
	for (i = 0; i < 26; i++)
		putchar("\c", lower_alphabet);

	return (0);
}
