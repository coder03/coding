#include<stdio.h>
extern int test1_var;
void fun()
{
	printf("function value=%d\n",test1_var);
}
