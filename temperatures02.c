
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main(void)
{
	// initialise the basic pointer for 5 elements
	double *tem1=malloc(sizeof(double)*5);
	double *tem2;
	double *tem3;
	int i=0;
    bool flag = true;

	// loop untill get -100.0
	while(flag == true)
	{
		// get the first value for the array
	    if (i<5)
	    {
	    	for(;i<5;i++) //get the first 5 values stored in initialised location
	       {
	    	    printf("enter a temperature or end entering by -100.0: "); 
	    	    scanf("%lf",&tem1[i]);
	    	
	    	    if(tem1[i] == -100.0) // break the loop when meet -100
	    	    {
	    		    flag = false;
	    		    break;
	    	    }
	        }
	    }
	    

		if(i == 5 )// when the user fills up the previous location, double the size
		{

			tem2 = malloc(sizeof(double)* 5*2 );

			for(int j=0; j<5; j++) // copy the first 5 values into new array
		    {
			    tem2[j]=tem1[j];	
		    }

		    free(tem1); // deallocate the old array
		    //i++;
		}
		
		
		if(i>=5 && i < 10)
		{	
		    for(;i< 10 ; i++) // read the values in the new array
        	{
        		printf("enter a temperature or end entering by -100.0: ");
        		scanf("%lf",&tem2[i]);


        		if(tem2[i] == -100.0) // break the loop when meet -100.0
	    		{
	    			flag = false;
	    			break;
	    		}
        	}

	    }

	    if(i == 10) // when the user fills up the previous location, double the size
	    {
		
			tem3 = malloc(sizeof(double)* (5*2*2) );
			

			for(int j=0; j< 10; j++) // copy the first 5 values into new array
		    {
			    tem3[j]=tem2[j];	
		    }

		    free(tem2); // deallocate the old array
		    //i++;
		}
		
		
		if(i>=10)
		{	
		    for(;i<20 ; i++) // read the values in the new array
        	{
        		printf("enter a temperature or end entering by -100.0: ");
        		scanf("%lf",&tem3[i]);

        		if(tem3[i] == -100.0) // break the loop when meet -100.0
	    		{
	    			flag = false;
	    			break;
	    		}
        	}

	    }
		
	}
			
    
    // display the values in reverse 
    if(i<5)
    { 
    	i--;
    	
    	for(; i>0; i--)
    	{
    		printf("%0.1lf ", tem1[i]);
    	}
    	printf("%0.1lf", tem1[0]);
    	printf("\n");
    	free(tem1);
    }
    else if(i >=5 && i < 10)
    {
    	i--;
    	
    	for(;i>0; i--)
    	{
    		printf("%0.1lf ", tem2[i]);
    	}
    	printf("%0.1lf", tem2[0]);
    	printf("\n");
    	free(tem2);
    }
    else if(i >=10 && i < 20)
    {
    	i--;
 
    	for(;i>0; i--)
    	{
    		printf("%0.1lf ", tem3[i]);
    	}
    	printf("%0.1lf", tem3[0]);
    	printf("\n");
    	free(tem3);
    } 

	return 0;
}
