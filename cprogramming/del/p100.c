// demonstrate sizeof(*a) = sizeof(tpye of data that a pointer points to)

#include<stdio.h>
#include<stdio.h>
int main()
{
	char a[] = "Visual C++";
	char *p = "Visual C++";
	printf("%d\t %d\n", sizeof(a), sizeof(p));
	printf("%d\t %d\n", sizeof(*a), sizeof(*p));
	return 0;
} 

// output = 11	4
//	     1  1
