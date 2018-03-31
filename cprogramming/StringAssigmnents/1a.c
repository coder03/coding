// implement strcmp using pointers
#include<stdio.h>
#include<string.h>
int pstrcmp(char *, char *);
void main()
{
	char *a="zzaa";
	char *b="zz";
	printf("strcmp(%s,%s)= %d\n", a,b,strcmp(a,b));
	printf("pstrcmp(%s,%s)= %d\n", a,b, pstrcmp(a,b));
}
int pstrcmp(char *a,char *b)
{

	while( (*a != '\0') && (*b != '\0'))	
	{
		if(*a > *b)
		{
			return 1;
		}
		if(*a < *b)
		{
			return -1;
		}
		a++;
		b++;
	}
	if( (*a== '\0') && (*b == '\0'))
		return 0;
	if((*a=='\0'))
		return -1;
	if( (*b=='\0'))
		return 1;
}
