#include<stdio.h>
int main()
{
	int a[] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
	int *p;
	p = a;
	printf("*p = %u\n",*p);
	printf("*p+1= %u\n",*p+1);
	//printf("(*p)+1 = %u",(*p)+1);
	printf("p+1= %u\n",p+1);
	printf("p++ = %u\n"p++);
	printf("p-- = %u\n",p--);
	printf("*(p+1) = %u\n",*(p+1));
	printf("*(p-1) = %u\n", *(p-1));
	return 0;

}
