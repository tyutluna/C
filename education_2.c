#include <stdio.h>
#include<string.h>


int main(void)
{
	int n;
	char e_level[50];
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
    	strcat(e_level,"Primary");
    }
   
    else if (n >= 8 && n <= 12)
    {
   		strcpy(e_level ,"Secondary");
    }
    else if (n >= 13)
    {
    	strcat(e_level,"Tertiary");
    }

    printf ("%d years is %s level education.\n", n, e_level);

	return 0;
}