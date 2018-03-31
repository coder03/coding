// find GCD using recursion

int gcd(int,int);
#include<stdio.h>
int main()
{
	int a,b,gcd_out;
	printf("Enter 2 no\n");
	scanf("%d%d",&a,&b);
	gcd_out = gcd(a,b);
	printf("Gcd of %d, %d = %d\n", a,b,gcd_out);
	return 0;
}
int temp;
int gcd(int a,int b)
{
	temp = a % b;
	a = b;
	b = temp;
	if(temp == 0)
		return a;
	else
		return gcd(a,b);
}
