// find no even or odd
 
#include<stdio.h>
int main()
{
	int a;
	printf("Enter a no\n");
	scanf("%d",&a);
	if ((1&a)==1)
		printf("Odd no\n");
	else
		printf("Even no\n");
	return 0;
}
