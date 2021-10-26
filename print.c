#include <stdio.h>
#include <stdlib.h>

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
	int len;
	printf("how many values do you want to enter: ");
	scanf("%d", &len);

    int *array = malloc(sizeof(int)*len);
    if(array == NULL)
    {
    	printf("Error!\n");
    	return 1;
    }
	for(int i=0; i<len; i++)
	{
		printf("enter array values: ");
		scanf("%d", &array[i]);
	}

	print_array(array,len);
	free(array);
	return 0;
}