#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char * string = " ";// this won't work more on that in a moment
	string = malloc(sizeof(char));
	string[0] = '\0';
	//char * string = NULL;
	char input_string[257] = " ";//" "make the while loop work at the beginning


	while(input_string[0] != '#')
	{
		char *new_string = malloc((strlen(string)+strlen(input_string)+1)*sizeof(char));
		if(new_string==NULL || string==NULL)
		{
			printf("Error!\n");
		}
		else
		{
		    strcat(new_string, string);
		    strcat(new_string, input_string);

		    free(string); // free the memory, not the variable
		    string = NULL; //deny undefined behaviour;
		    string=new_string;
	    }
	    printf("enter your string: ");
		scanf("%256s",input_string);
	}

	printf("%s", string);
	printf("\n");

	
	return 0;
}