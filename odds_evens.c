#include <stdio.h>

int main(void)
{
	// initialise the vectors and indexs
	int nums[11]={11,3,9,7,6,10,13,17,2,8,3};
	int evens[11];
	int odds[11];

	int evens_index=0;
	int odds_index=0;
	int length_nums = sizeof(nums)/sizeof(int);

// loop to split the elements into two vecters
	for(int i=0; i < length_nums; i++)
	{
		if (nums[i] %2 == 0)
		{
			evens[evens_index]=nums[i];
			evens_index++;
		}
		else
		{
			odds[odds_index]=nums[i];
			odds_index++;
		}
	}

//display the result
	printf("odds numbers are \n");
	for(int i=0; i < odds_index; i++)
	{
		printf("%d\n", odds[i]);
	}

	
	printf("even numbers are \n");
	for(int i=0; i < evens_index; i++)
	{
		printf("%d\n", evens[i]);
	}
	printf("\n");
	return 0;
}