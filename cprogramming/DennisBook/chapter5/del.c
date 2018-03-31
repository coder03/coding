// strlen("he\0llo")  = 2;  not 5 .. 

#include<stdio.h>
#include<string.h>
int main()
{
	char *p = "He\0llo";
	printf("strlen(hell0) = %d\n" , strlen(p));
	return 0;
}
