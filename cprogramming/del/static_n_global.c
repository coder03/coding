#include<stdio.h>
static int a =6;
void fun();
int main()
{
	a++;
	printf("%d\n",a);
	fun();
	a++;
	printf("%d\n",a);
	return 0;
}
void fun()
{
	a++;
	printf("%d\n",a);
	a++;
}

