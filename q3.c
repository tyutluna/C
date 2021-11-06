#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int values_under_100(int *values, int size, int ** under_100_array)
{

	int count=0;
	int index_less=0;
	for(int i=0; i<size; i++)
	{
		if(values[i] < 100)
		{
			count = count +1;
			//(*under_100_array)[index_less]= values[i];
		}
	}

	int *new_value=malloc(sizeof(int)*count);
	for(int i=0; i<size; i++)
	{
		new_value[index_less]=values[i];
		index_less++;

	}
	(*under_100_array)=new_value;


	return count;
}

int main(void)
{
	// part a
	int *values;
	int size;

	printf("How many values do you want to enter: ");
	scanf("%d", &size);

	values=malloc(sizeof(int)*size);

	for(int i=0; i<size; i++)
	{
		printf("Enter a number:\n");
		scanf("%d", &values[i]);
		
	}
	 
	 for(int i=0; i<size-1; i++)
	 {
	 	printf("%d ", values[i]);
	 }
	 printf("%d\n", values[size-1]);

    // part b
	
    // call the function
    int * under_100_array;
    int count;
    count = values_under_100(values, size, &under_100_array);


	printf("There are %d values less than 100.\n", count);
	printf("The values less than 100 were: ");
	for(int i=0; i<count-1; i++)
	{
		printf("%d, ", under_100_array[i]);
	}
	printf("%d\n", under_100_array[count-1]);

	free(values);
	free(under_100_array);
	return 0;
}