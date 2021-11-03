#include <stdio.h>
#include <stdlib.h>

int ** make_zeros(int rows, int cols)
{
	int **zero=malloc(sizeof(int*)*rows);
	if(zero==NULL)
	{
		return NULL;
	}

	for(int r=0; r<rows; r++)
	{
		zero[r]=malloc(sizeof(int)*cols);
		if(zero[r]==NULL)
		{
			return NULL;
		}

	}

	for(int r=0; r<rows; r++)
	{
		for(int c=0; c<cols; c++)
		{
			zero[r][c]=0;
		}
	}
	return zero;
}

int main(void)
{
	int rows, cols;
	printf("enter a integer for row: ");
	scanf("%d", &rows);
	printf("enter a integer for colomun: ");
	scanf("%d", &cols);

	int ** zeros=NULL;
	zeros=make_zeros(rows,cols);

	for(int r=0; r<rows; r++)
	{
		for (int c=0; c <cols; c++)
		{
			printf("%d ", zeros[r][c]);

		}
		printf("\n");
	}
	free(zeros);

}
