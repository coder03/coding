// illustrating : with static, o/p = 2 3 4... without static ,o/p = 2 2 2 


#include<stdio.h>
void fun();
int main()
{
	fun();
	fun();
	fun();
	return 0;
}
void fun()
{
	static int x = 1;
	x++;
	printf("%d\n",x);
}
