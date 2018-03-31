#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *strrev(char *,char *);
int main(int argc,char *argv[])
{
	if(argc !=2)
	{
		printf("Plz enter in format <./a.out> <string>\n");
		exit(0);
	}
	char *rev=malloc(strlen(argv[1])+1);
	strrev(rev,argv[1]);
	puts(rev);	
	return 0;
}

char *strrev(char *rev,char *argv1)
{
	int count1;
	int count =0;
	while(*argv1 != '\0')
	{
		*argv1++;
		count++;
	}
	count1 = count;
	*argv1--;
	while(count >=0)
	{
		*rev = *argv1;
		*argv1--;
		*rev++;
		count--;
	}
	*rev = '\n';
	while( (count1+1) >=0)  // rev starting addres is in count1+1 loctions back
	{
		*rev--;
		count1--;
	}
	return rev;
}
