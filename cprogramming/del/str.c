#include<stdio.h>
int main()
{
	union sample
	{
		char c='a';
		int i;
	};
	union sample s;
	printf("size of structure = %d",sizeof(s));
	return 0;
}
