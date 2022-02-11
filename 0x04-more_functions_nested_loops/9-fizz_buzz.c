#include <stdio.h>

/**
 * main - prints fizz for multiple of 3, Buzz for multiple of 5 and FizzBuzz for multiple of  each numbers 3 and 5.
 * Return: Always 0.
 */
int main(void)
{
	int c;

	c = 1;
	
	printf("%d",c);

	while (c <= 100){
		c++;	
		if ((c % 3 == 0) && (c % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (c % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (c % 3 == 0)
		{
			printf(" Fizz");
		}
		else
		{
			printf(" %d",c);
		}
	}
	printf("\n");
	return (0);
}
