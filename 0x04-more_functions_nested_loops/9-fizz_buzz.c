#include <stdlib.h>
#include <stdio.h>
/**
 * main - replaces multiples of 3 and 5 with Fizz  Buzz in 1 - 100
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0)
			printf("Fizz ");
		else if ((i % 5) == 0)
			printf("Buzz ");
		else if ((i % 3) == 0 && (i % 5) == 0)
				printf("FizzBuzz ");
		else
			printf("%d ", i);
	}
	putchar('\n');
	return (0);
}
