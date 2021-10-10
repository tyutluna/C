/*Program reads in an array of up to integers representing peoples ages in years 
and calculates and prints the maximum age and the minimum age and the average age.
*/
#include <stdio.h>

int main(void)
{
	// initialise vector age
	
	int age[10];
	int length=0; // get how many integers entered.
	int sum_age=0;
	

	// get input
	printf("enter up to 10 ages and end it by -1\n");
    int i=0;
	while(i < 10 && age[i-1] !=-1)
	{
		scanf("%d", &age[i]);// get elements for vector age.

		while(age[i] < -1 || age[i] > 150) // make sure the value got is valid.
		{
			printf("Please enter a valid number: ");
			scanf("%d", &age[i]);
		}
		length++;
		i++;
	}
   
   


	if(age[length-1]== -1) // exclude -1
	{
		length=length-1;
	}
	

    // loop to get the maximum, minimum and sum of the age vector
    int max_age=age[0];
    int min_age=age[0];

	for(int j=0; j < length; j++)
	{
		sum_age = sum_age + age[j];
		//printf("%d \n", sum_age);

		if (age[j] >= max_age)
		{
			max_age = age[j];
		}
		else if(age[j] <= min_age)
		{
			min_age = age[j];
		}
		//printf("%d %d \n", max_age, min_age); for test
	}
	float ave_age = sum_age*1.0/length;

	//display the result
	
	printf("%d %d %.1f\n", max_age, min_age, ave_age);
	


	return 0;
}