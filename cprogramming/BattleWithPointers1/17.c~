// implement a function that returns an array of pointers to main function

int *(fun())[4];
#include<stdio.h>
int main()
{
	int (*p)[4];	
	p = fun();
	printf("Returned address = %u",p);
	return 0;
}

int *(fun())[4]
{
	static int a[][4] = { {1,2,3,4},{4,3,2,1},{1,1,1,1} };
	printf("%u",a);
	return a;
}
