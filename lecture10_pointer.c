#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{ 

    // size of pointers are the same.
	int array[]={1,2,3,4,5,6};
	int * ptr = array;
	int len=sizeof(ptr);

	printf("%d\n", len); // show that the length of pointer is always the same no matter what the value is staored.
	printf("%d\n", *ptr+2);// print the 3rd elements in the array. this is the wrong answer.
	printf("%d\n", *(ptr+2));// The following ones are correct.
	printf("%d\n", ptr[2]);
	printf("%p",ptr);// you can see the pointer address




	return 0;
}