// check if this Operating system has access to 0th location

#include<stdio.h>
int main()
{
	int *ptr = NULL;
	printf("The value of Ptr= %x\n", ptr);
	if(ptr)
		printf("P is not null\n");
	else 
		printf("P is null\n");
	return 0;
}
