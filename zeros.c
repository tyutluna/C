#include <stdio.h>
#include<stdlib.h>

int * make_zeros(int rows)
{
	int *zeros = malloc(sizeof(int)*rows);
	for (int i=0; i<rows; i++)
	{
		zeros[i]=0;
	}
	return zeros;
}

void print_array(int *array, int len)
{
	printf("{");
	for(int i=0; i<len-1; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d}\n", array[len-1]);

	return;

}

int main(void)
{
	int rows;
	int *zeros;
    printf("enter rows: ");
    scanf("%d", &rows);

    zeros = make_zeros(rows);

    print_array(zeros, rows);

    free(zeros);
    return 0;
}