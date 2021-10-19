#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	// initialise the number of temperatures entered and get it.
	int count;
	printf("How many temperatures you would enter? ");
	scanf("%d", &count);
    
    // initialise the pointer of temperatures.
	double *temPtr = malloc(sizeof(double)*count+1);
    
    // get the value of temperatures
	for(int i=0; i<count; i++)
	{
		printf("enter a temperature: ");
		scanf("%lf", &temPtr[i]);
	}

    // print the values in reverse order
	for(int j=count-1; j>0; j--)
	{
		printf("%0.1f ", temPtr[j]);
	}
	printf("%0.1f", temPtr[0]);
	printf("\n");

    // free the dynamica memory
	free(temPtr);

	return 0;
}