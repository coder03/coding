// multiply 2 no using bitwise operator

#include<stdio.h>
int main()
{
	int a,b,mul;
	printf("Enter 2 no\n");
	scanf("%d%d",&a,&b);
	mul = (a^b)+((a&b)<<1);
	printf("%d * %d = %d\n",a,b,mul);
	return 0;
}
