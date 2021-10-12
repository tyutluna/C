/* the program reads from the user, a string of no more than 20 characters.
I can assume the string consists only of lower case letters and commas(the
 commas are to separate names).*/

#include<stdio.h>
#include<string.h>
int main(void)
{
	char name[21];
    // get input and store it as a character vector 
	printf("Enter your name, you can seperate your first name and family name by comma: \n");
	scanf("%20s", name);
	

    // get how many elements in the vector
	int length=strlen(name);
	
   
    // loop to change the lower case to upper case and keep the commas
	for(int i=0; i<length; i++)
	{
		if(name[i]>='a' && name[i]<='z')
	    {
		    name[i]=name[i]-32;   
		}
		
		else if(name[i]==',')
		{
			name[i]=name[i];
		}
		else if(name[i] >= 'A' && name[i] <= 'Z')
		{
			name[i]=name[i];
		}

		// dosplay the result
		
	}
	printf("%s", name);
	printf("\n");

	return 0;

}
