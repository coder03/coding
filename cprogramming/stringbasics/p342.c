// scanf cant take multiple words unless its writen as below

#include<stdio.h>
int main()
{
	char a[10];
	printf("Enter the name\n");
	scanf("%[^\n]s",a);
	puts(a);
	return 0;
}
