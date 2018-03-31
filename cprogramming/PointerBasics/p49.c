// program to illustrate point of a pointer operation

#include<stdio.h>
int main()
{
	int *p;
	int n=6;
	int marks[] = { 10,11,12,13,14,15 };
	p = marks;
	display(p,n);
	return 0;
}
int display (int *p1, int n)
{
	show(&p1,n);	
}
int show(int **p2,int n)
{
	int i;
	for (i = 0; i < n ; i++)
	{
		printf("%u\t", **p2);
		(**p2)++;	// if yo write as **p2++ it is segmentation fault.
	}
	return 0;
}

