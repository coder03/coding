// implement srtcmp(src,dest,n) using pointers
// if n is greater then strlen of src n dest??? ; not considered here
#include<stdio.h>
#include<string.h>
int pstrncmp(char *,char *, int);
int main()
{
	char *a= "zzb";
	char *b = "zza";
	int n=3;
	printf("strncmp(%s,%s,%d)= %d\n",a,b,n,strncmp(a,b,n)); 
	printf("pstrncmp(%s,%s,%d)= %d\n",a,b,n,pstrncmp(a,b,n)); 
	return 0;
}

int pstrncmp(char *a,char *b, int n)
{
	int i;
	for(i=1; i<=n; i++)
	{
		if( (*a!='\0') && (*b != '\0') )
		{
			if(*a > *b)
			{
				return 1;
			}
			if(*a < *b)
			{
				return -1;
			}
		}
		a++;
		b++;
	}
	if( (*a == '\0') && (*b== '\0') )
	{
		return 0;
	}
	if (*a == '\0')
	{
		return -1;
	}
	if(*b== '\0')
	{
		return 1;
	}
	return 0;
}
