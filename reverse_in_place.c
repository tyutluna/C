/* the program reads in a string(20 characters or less) form the user into an array.
Then reverse that string and print out the reversed version.*/

#include<stdio.h>
#include<string.h>

int main(void)
{
	// get input
	char word[21], new_word[21];
	printf("enter a string of characters: \n");
	scanf("%s", word);
	
    // use the length of input to loop and get a new vector
	int length=strlen(word);
	for(int i=0; i<=length; i++)
	{
		new_word[i]=word[length-i];
		printf("%c", new_word[i]); // display the elements of new vector
	}
	printf("\n");
	return 0;
}