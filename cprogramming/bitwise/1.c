// macro to set a bit in no

#define set_bit(x,p) ((1<<p) | x);
#include<stdio.h>
int main()
{
	int x,p,set;
	printf("Enter the no\n");
	scanf("%d",&x);
	printf("Enter the bit position\n");
	scanf("%d",&p);
	set = set_bit(x,p);
	printf("%d's set bit at %dth locaiot= %d\n",x,p,set);
}
	
	
	
