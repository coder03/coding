// pass 2D array of integers to a function, find the sum (using arrays)

#include<stdio.h>
void sum(int);
int s=0;	//global variable--must be declared before main program
int main()
{
	int a[3][4] = {
			{1,2,3,4},
			{1,2,3,4},
			{1,2,3,4}			

			};
	int i,j;
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			sum(a[i][j]);
	printf("sum = %d\n",s);
	return 0;
}
// int s=0 here gives error..
void sum(int a)
{
	s += a;
}
