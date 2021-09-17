#include<stdio.h>

int main(void)
{
	// initialise the variables
	int ones, tens, hundreds, user_input;

	// ask question and get user's user_input
	printf("Enter a number and I'll shouw you the ones, tens and hundreds: ");
	scanf("%d", &user_input);

	// calculate the ones, tens and hundreds
	ones = user_input % 10;
	tens = (user_input/10) % 10;
	hundreds = (user_input/100) % 10;

	// print the result 
	printf("%d\n%d\n%d\n",  ones, tens, hundreds);
	return 0;
}