#include <stdio.h>
#include <string.h>

/**
 * main - entry point.
 *
 * Description: Explaining the task.
 * This function prints the alphabet in lowercase reversed using the fucntion
 * putchar() two times at max.
 *
 * Return: 0 (Just a random value to stop the program)
 */
int main(void)
{
	/* Declare and initialize the string variable lower_alphabet */
	char lower_alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i, length_al;
	length_al = strlen(lower_alphabet)-1;	/* -1 to skip the /o char */

	for (i = length_al ; i > -1; i--)
		putchar(lower_alphabet[i]);
	putchar('\n');

	return (0);
}
