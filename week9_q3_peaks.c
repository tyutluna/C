#include <stdio.h>
int main(void)
{
	int vals[10];
	int peaks[10];
	int length;

	printf("Enter a vector with 3 to 10 integers. How many would you enter?\n");
	scanf("%d", &length);
    
	int i=0;
	while(i < length)
	{
		
		printf("enter the %dth integer: ", i+1);
		scanf("%d", &vals[i]);

		//printf("%d--\n", vals[i]);
		//printf("%d--\n",i);
		i++;
	}
	

	int peaks_index=0;

	
    printf("The peaks are ");
	for (int j=1; j< length-1; j++)
	{
		if((vals[j] > vals[j-1]) && (vals[j] > vals[j+1]))
			{
				peaks[peaks_index]= vals[j];
		        printf("%d \n", peaks[peaks_index]);
		        peaks_index++;
		    }
	}
	printf("\n");


	return 0;
}