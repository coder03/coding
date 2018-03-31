// bad programmin style, coz i dies after the function.. i's value 20 is not printed in 2nd printf

#include<stdio.h>
int *fun();
int main()
{
	int *p;
	p = fun();
	printf("%d\n",p);
	printf("%d\n",*p);
	return 0;
}
int *fun()
{
	int i=20;
	printf("Inside the fucntion i = %d, address = %d\n",i,&i);
	return(&i);
}
