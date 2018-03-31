//implement strncpy(dest,src,n)

# include <stdio.h>
# include <string.h>
# include <stdlib.h>
char *pstrncpy(char *,char *,int);
int main()
{
	char *src="chatty";
	char *dest;
	dest = malloc( sizeof(char)*(strlen(src)+1) );
	int n=4;
	dest=pstrncpy(dest,src,n);
	puts(dest);
	return 0;
}

char *pstrncpy(char *dest,char *src,int n)
{
	int i;
	char *temp;
	temp = dest;	
	for(i=0;i<n;i++)
	{
		*temp = *src;
		src++;
		temp++;
	}
	*temp = '\0';
	return dest;
}
