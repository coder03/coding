// implement strcat(dest,src) using arrays
// try using pointers
#include<stdio.h>
#include<string.h>
char *pstrcat(char *,char *);
int main()
{
	char dest[40]="Prakash";
	char src[10]="Chatty";
	
	// using builtin function
	char dest1[40];
	char src1[10];
	strcpy(dest1,dest);
	strcpy(src1,src);
	strcat(dest1,src1);
	puts(dest1);

	// own function
	pstrcat(dest,src);
	puts(dest);
	
	return 0;
}

char *pstrcat(char *dest,char *src)
{
	int i,j;
	for(i=0;dest[i] != '\0'; i++);
	for(j=0; src[j] !='\0'; j++)
	{
		dest[i+j] = src[j];
	}
	dest[i+j]='\0';
	return dest;
}
