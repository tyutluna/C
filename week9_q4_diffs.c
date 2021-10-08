#include <stdio.h>
#include<stdlib.h>
int main(void)
{
	int positions[20];
	int sumdiffs[20]={0};

	int length, subsum;
	printf("You can enter an integer vector and I will show you the sum of the differences of each element from others.\n");
	printf("How many integers would you enter? ");
	scanf("%d", &length);

	for(int i=0; i<length; i++)
	{
		printf("enter the %dth integer: ", i+1);
		scanf("%d", &positions[i]);
	
	}

	for(int j=0; j<length; j++)
	{
		for(int n=0; n<length; n++)
		{
			subsum=abs(positions[j]-positions[n]);
			//use "printf("%d\n", subsum);" to test the loop
			sumdiffs[j]=sumdiffs[j]+subsum;
			//printf("%d\n", sumdiffs[j]); to test the loop
		}
		
		printf("%d\n", sumdiffs[j]);
	}


	return 0;
}