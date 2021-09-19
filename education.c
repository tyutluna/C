/* This program reads in a positive integer representing the number of year's
   a person has spent in education so far and prints out the level of
   educational attainment associated with that number of year's education */
#include <stdio.h> 

int main(void)
{
	// initialise the input and get input
	int n;
	printf("Enter the number of year's the person has spent in education so far: ");
    scanf("%d", &n);

    // determin the output based on input
    if (n < 0)
    {
    	printf("Please enter a valid positive number.\n");
    	return 0;
    }
    else if (n >= 0 && n <= 7)
    {
    	printf("Primary");
    }
   
    else if (n >= 8 && n <= 12)
    {
    	printf("Secondary");
    }
    else if (n >= 13)
    {
    	printf("Tertiary");
    }

    printf (" level education.\n");

	return 0;
}