#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * main - print last digit of the number stored in the variable
 *
 * Description - Assign a random number to a variable
 * each time it is executed
 *
 * Return - Always 0 (Success)
 */

int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	if (last > 5)
		printf("Last digit of %d is %d and is greater tham 5\n", n, last);
	else if (last == 0)
		printf("Last digit of %d is %d and is 0\n", n, last);
	else if (last < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	return (0);

}	
