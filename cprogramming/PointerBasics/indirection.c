#include<stdio.h>
int main()
{
	int i=25;
	printf("value = %d\n",*&i);
	//printf("value = %d\n",&*i);  // this doesnt exist, error: invalid type argument of unary *
	return 0;
}
