// pass 2D array of integers to a function and print its values using arrays.

#include<stdio.h>
void pas(int);
int main()
{
	int a[3][4] = {
			{1,2,3,4},
			{11,22,33,44},
			{9,8,7,6}			

			};
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
			pas(a[i][j]);
		printf("\n");
	}
	return 0;
}

void pas(int a)
{
	printf("%d\t",a);
}
