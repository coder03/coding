// demonastate #ifdef

#define TGF 1
#include<stdio.h>
int main()
{
	int a;
	printf("Enter a no\n");
	scanf("%d",&a);
	#ifdef TGF
		printf("control inside\n");
	#else
		printf("control outside\n");
	#endif
	return 0;
}
