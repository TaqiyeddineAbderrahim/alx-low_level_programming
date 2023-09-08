#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point.
 *
 * Description: Explaining the task.
 * This function prints the last digit of the random number
 * stored in the variable n.
 *
 * Return: 0 (Just a random value to stop the program)
 */
int main(void)
{
	int n;
	int l_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
      	l_digit = n % 10;

	if (l_digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, l_digit);
	else if (l_digit == 0)
		printf("Last digit of %d is 0 and is 0\n", n);
	else if ((l_digit < 6) && (l_digit != 0))
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l_digit);

	return (0);
}
