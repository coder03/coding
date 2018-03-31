// return a 2D array base add and print d elements in main function

#include<stdio.h>
int ((*fun())[4]);
int main()
{
	int (*p)[4];
	int i,j;
	p = fun();
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
			printf("%d\t", *(*(p+i)+j) );
		printf("\n");
	}
	return 0;
}
int ((*fun())[4])
{
	static int a[][4] = { {1,2,3,4}, {4,3,2,1}, {1,1,1,1}};
	return a;
}
