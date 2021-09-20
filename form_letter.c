#include<stdio.h>
int main(void)
{
	// initialise the variables
	char first_name[11], last_name[11];
	int age;
	float fraction;

	//print the questions
	printf("Enter your name, age and employment fraction(between 0.0 and 1.0: ");

	// get input from the user
	// scanf("%[^\n]", name) can also work.
	scanf("%10s", first_name);
	scanf("%10s", last_name);
	scanf("%d", &age);
	scanf("%f", &fraction);

	//print the result
	printf("Your name is %s %s, you are %d years old and your employment fraction is %0.1f.\n",
		first_name, last_name, age, fraction);

	return 0;
}