#include <stdio.h>
#include <stdlib.h>

// simple program to copy 2d array of numbers

int ** array_copy2d(int **src, int rows, int cols)
{
	// allocate
	int** result=malloc(sizeof(int*)*rows);
	if(result==NULL)
	{
		return NULL;
	}

	// copies from src to dest array.
	for(int row=0; row<rows; row++)
	{
		// allocate a row
		result[row]=malloc(sizeof(int)*cols);
		if(result[row]==NULL)
		{
			return NULL;
		}
	}

	// copy a row.
	for(int r=0; r<rows; r++)
	{
		for(int c=0; c<cols; c++)
		{
			result[r][c]=src[r][c];
		}
	}

}