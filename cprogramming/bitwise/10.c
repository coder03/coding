// toggle odd position of a no


// wrong answer is comin

#include<stdio.h>
int main()
{
	int a;
	printf("Enter a no\n");
	scanf("%d",&a);
	int x = 2;
	while(x!=0)
	{
		a= a^x;
		x=x<<2;
	}
	printf("%d",a);
	return 0;
}
