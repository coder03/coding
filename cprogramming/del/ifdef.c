# include <stdio.h>
#define def 1;
int main()
{
	int a;
	#ifdef def
		printf("Inside def\n");
		printf("statement\n");
	#else
		printf("in else\n");
	#endif
	printf("Enter the no\n");
	scanf("%d",&a);
	printf("The enterned no = %d\n",a);
	return 0;
}

