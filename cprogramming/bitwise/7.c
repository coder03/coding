//function invert(x,p,n) , invert n bits from position p in x

#include <stdio.h>
void invert(int ,int,int);
int main()
{
	int x,p,n;
	printf("Enter the no, postion and no of bits\n");
	scanf("%d%d%d",&x,&p,&n);
	invert(x,p,n);
	return 0;
}

void invert(int x,int p, int n)
{
	printf("invert(%d,%d,%d) = %d\n",x,p,n, ( (~(~0<<n))<<p-n+1) ^x );
}


