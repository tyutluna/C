#include <stdio.h>
#include <stdlib.h>

void array_copy_jagged(int ** src, int ** dest,int rows, int* cols)
{
	for(int r=0; r<rows; r++)
	{
		for (int c=0; c < cols[r]; c++)
		{
			dest[r][c]=src[r][c];
		}
	}
	

}

int main(void)
{
	int rows;
	printf("How many rows will you enter: ");
	scanf("%d", &rows);

    int ** array=malloc(sizeof(int*)*rows);
    int *cols=malloc(sizeof(int)*rows);

	for(int i=0; i< rows; i++)
	{
		printf("how many colomuns will enter for %dth row: ", i+1);
		scanf("%d", &cols[i]);
		array[i]=malloc(sizeof(int)*cols[i]);
	}

	for(int r=0; r<rows; r++)
	{
		for (int c=0; c < cols[r]; c++)
		{
			printf("enter a value: ");
			scanf("%d", &array[r][c]);
		}
	}

	int ** new_array=NULL;
	array_copy_jagged(array, new_array, rows, cols);

    for(int r=0; r<rows; r++)
	{
		for (int c=0; c < cols[r]; c++)
		{
			printf("%d ", new_array[r][c]);
		}
	}

	free(cols);
	free(new_array);

	return 0;
}