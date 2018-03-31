#include<stdio.h>
int main()
{
	char a=65, *p = &a, d;
	d = sizeof(++*p);
	a = sizeof(p++);
	printf("%d\t %c\t",d,*p);
	return 0;
}
