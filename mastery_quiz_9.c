#include <stdio.h>
int main(void)
{
	int numbers[5]= {1,2,3,4,5};
	for (int i = 0; i < 5; i++)
	{
		numbers[i] = numbers[i] + 1;
		printf("%d",numbers[i]);

	}
    
    /* All of the flowing method can not change the value of numbers
    numbers = {2,3,4,5,6};
    for (int i = 0; i < 5; i++)
    {
    	printf("%d\n", numbers[i]);
    }
    numbers = numbers + 1;
    for (int i = 0; i < 5; i++)
    {
    	printf("%d\n", numbers[i]);
    }
*/

	return 0;
}