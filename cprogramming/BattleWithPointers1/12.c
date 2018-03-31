// pass 2D array of integers to function and find sum of all elements(using pointers)

#include<stdio.h>
void sum(int (*)[4]);
int s=0;
int main()
{
    	  
	static int a[3][4] = {
			{1,2,3,4},
			{4,2,1,3},
			{1,1,1,1}
		   };
	sum(a);
	printf("sum = %d\n",s);
	return 0;
}

void sum(int (*a)[4])
{
	int i,j;
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			s += *(*(a+i)+j); // or s += a[i][j]
}
	
			 
