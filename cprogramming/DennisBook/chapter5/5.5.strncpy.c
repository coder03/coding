#include<stdio.h>
#include<stdlib.h>
void mystrncpy(char *s,char *t, int n);
int main()
{
	char *s = malloc(20);
	char *t = "copytext";
	int n = 5;
	mystrncpy(s,t,n);
	puts(s);
	return 0;
}

void mystrncpy(char *s,char *t, int n)
{
	while( *t && n-- > 0)
		*s++ = *t++;
	*s++ = '\0';
}
	
