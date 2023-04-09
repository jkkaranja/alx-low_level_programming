#include <stdio.h>
#include "main.h"

/**
  * main - print s the numbers 1 to 100 followed by a new line
  * but for multiples of 3 prints Fizz instead of the number
  * and prints buzz for multiples of 5
  * Return: always 0
  */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i == 1)
		{
			printf("%d", i);
		}
		else
		{
			printf("%d", i);
		}
			if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
