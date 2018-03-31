// macro mask a bit in a no

#define mask_bit(x,p) (~(1<<p) & x)
#include<stdio.h>
int main()
{
	int x,p;
	printf("Enter the no\n");
	scanf("%d",&x);
	printf("Enter the bit position\n");
	scanf("%d",&p);
	printf("%d's masked bit at %dth locaiot= %d\n",x,p,mask_bit(x,p));
}
	
