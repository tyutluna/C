#include <stdio.h>
#include <stdlib.h>

void array_copy2d(int **, int **, int, int);

int main(void)
{
	// get the size of the array
	int rows, cols;
	printf("How many rows? ");
	scanf("%d", &rows);
	printf("How many cols? ");
	scanf("%d", &cols);

	// create source array
	// alternative one needs to accessed by source *(r*col +c)
	// where r is the row you want and c is the coloum
	// int * source = (int *)malloc(sizeof(int)*rows*cols)

	// option two
	int ** source =(int**)malloc(sizeof(int*)*rows);
	for(int r=0; r<rows; r++)
	{
		source[r]=(int*)malloc(sizeof(int)*cols);
	}

	// fill the array 
	for(int r=0; r<rows; r++)
	{
		for(int c=0; c<cols; c++)
		{
			printf("enter the next value: ");
			scanf("%d", &source[r][c]);
			// source[r]=*(source+r)
		}
	}

	// create destination array
	dest = (int*)malloc(sizeof(int*)*rows);
	for(int r=0; r <rows; r++)
	{
		dest[r]=(int*)malloc(sizeof(int)*cols);
	}

	// call the function
	array_copy2d(source, dest, rows, cols);

    // print desination array
    for(int r=0; r<rows; r++)
	{
		for(int c=0; c<cols; c++)
		{
			printf("%d ", dest[r][c]);
		}
		printf("\n");
	}

	// free memerrory
	for(int r=0; r < rows; r++)
	{
		free(source[r]);
	}
	free(source);
}

void array_copy2d(int** src, int** dest, int rows, int cols)
{
	// copy values from source to dest
	for(int r=0; r<rows; r++)
	{
		for(int c=0; c<cols; c++)
		{
			dest[r][c]=source[r][c];
		}
	}
}