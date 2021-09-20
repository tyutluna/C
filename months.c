#include <stdio.h>

int main(void)
{
	// intialise the input and get user input
	int n;
	printf("Please enter an integer between 1 and 12, I will return you the shorthand of month.\n");
	scanf("%d",&n);

    // make sure the input is valid. If not, show a notation.
	if (n > 12 || n < 1)
	{
		printf("Please enter a valid number.\n");
		return 0;
	}


	else
	{   // show the exactly answer
		switch (n)
		{
			case 1:
			printf("Jan\n");
			break;

			case 2:
			printf("Feb\n");
			break;

			case 3:
			printf("Mar\n");
			break;

			case 4:
			printf("Apr\n");
			break;

			case 5:
			printf("May\n");
			break;

			case 6:
			printf("Jun\n");
			break;			

			case 7:
			printf("Jul\n");
			break;

			case 8:
			printf("Aug\n");
			break;

			case 9:
			printf("Sep\n");
			break;

			case 10:
			printf("Oct\n");
			break;			

			case 11:
			printf("Nov\n");
			break;

			case 12:
			printf("Dec\n");
			break;
		}
	}



	return 0;
}