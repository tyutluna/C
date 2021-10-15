#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	
	char digits[20];
	printf("enter the digits: ");
	for(int i=0; i<20; i++)
	{
		digits[i]='\n';
	}
	scanf("%19s", digits);
	//printf("%c\n",digits[0]);
	//printf("%c\n",digits[1]);
	int len=strlen(digits);
	//printf("%d\n", len);
	

    int *newdigits=malloc(sizeof(int)*len+1);
    for(int i=0;i<len;i++)
    {
    	newdigits[i] = digits[i]-'0';
    	//printf("%d\n",newdigits[i]);
    }

    int sum = 0;
    for(int i=0; i<len; i++)
    {
    	sum = sum+newdigits[i];
    }

	printf("%d\n",sum);
	free(newdigits);

	
	return 0;
}