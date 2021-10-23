# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main(void)
{
	double *array;//dynamic  (array[10] static)
	int len=10;
	double max;

	array=malloc(sizeof(double)*len);

	for (int i=0; i<len; i++)
	{
		printf("Enter a number: ");
		scanf("%lf", &array[i]);
	}

	max=array[0];
	for (int i=1; i<len; i++)
	{
		if(array[i]>= max)
		{
			max=array[i];
		}
	}

	printf("The largest of your numbers is: %0.1lf\n", max);
	free(array);

}