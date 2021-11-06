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
		if(values[i] < 100)
			{
				new_value[index_less]=values[i];
		        index_less++;
		    }

	}
	(*under_100_array)=new_value;


	return count;
}