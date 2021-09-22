#include<stdio.h>

int main(void)
{
	// initialise the variables
	int c, f;

	// ask question
	printf("Enter a temperature in Celsius: ");

	// get input from user
	scanf("%d", &c);

	// calculate the value
	f = c*9/5 +32;

	// print the result
	printf("%d degrees Celsius is %d degrees Fahrenheit.\n", c, f);

	return 0;
}