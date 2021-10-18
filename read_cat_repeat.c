#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	char *combined;
	char input1[257];
    char *newcombined;
    newcombined=malloc(sizeof(char)*1);

		
	printf("Enter a string (max 256 characters) " );
	scanf("%256s", input1);
	int len=strlen(input1);

	while(input1[0] != '#')
	{
		combined=malloc(sizeof(char)*(len+1));

		combined[0]='\0'; // set a null at beginning to mark as empty.
	
		strcat (combined, input1);
		
		newcombined = realloc(newcombined, sizeof(char)*(len+strlen(combined)+1));
		

		strcat(newcombined, combined);


		//strcat(newcombined, input1);

		free(combined);

		scanf("%256s", input1);
		
		
		if (input1[0]=='#'){
			break;
		}
        len=strlen(input1);

	}

    printf("%s\n",newcombined);
    free(newcombined);
    
	return 0;
}