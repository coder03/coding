//implement i*n+j/m using bit wise where n =8 and m =4

#include<stdio.h>
int main()
{
	int i,j;
	printf("Enter i and j value\n");
	scanf("%d%d",&i,&j);
	printf("%d*8+%d/4=%d\n",i,j,((i<<3)+(j>>2)) );   // dnt forget to put brace for i<<3 and j>>2
	printf("without bitwise out = %d",i*8+j/4);
	return 0;
}	
