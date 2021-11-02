#include <stdio.h>
#include <stdlib.h>

// simple program to copy 2d array of numbers

void array_copy2d(int **src, int ** dest, int rows, int cols)
{
	// copies from src to dest array.
	for(int row=0; row<rows; row++)
	{
		for(int col=0; col<cols; col++)
		{
			dest[row][col]=src[row][col];
		}
	}
}

// driver code for array copy 
int main(void)
{
	int rows=3;
    int cols=2;
    int row0[]={1,2};
    int row1[]={3,4};
    int row2[]={5,6};
    int *vals[3];

    // build vals
    vals[0]=row0;
    vals[1]=row1;
    vals[2]=row2;

    // destination array
    int **val_copy;

    // dynamically allocate space for val_copy
    val_copy=malloc(sizeof(int*)*rows);
    if(val_copy==NULL)
    {
    	printf("allocation error\n");
    	return 1;
    }

    // dynamically allocate space for each row
    for(int row=0; row<rows; row++)
    {
    	// put error handling here
    	val_copy[row]=malloc(sizeof(int)*cols);
    }

    // copy 
    array_copy2d(vals, val_copy, rows, cols);

    //test
    for(int row=0; row<rows; row++)
    {
    	for(int col=0; col<cols; col++)
    	{
    		printf("%d ", val_copy[row][col]);
    	}
    	printf("\n");
    }
    return 0;

}
