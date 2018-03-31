// check powers of 2?
	
#include<stdio.h>
int main()
{
	int a;
	printf("Enter the no\n");
	scanf("%d",&a);
	if ( ( a & (a-1)) == 0) 
	{
		printf("The no %d is powers of 2\n",a);
	}
	else
	{
		printf("Then no %d is not powers of 2\n",a);
	}
	return 0;
}
