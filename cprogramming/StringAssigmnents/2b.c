// implement strncat(dest,source,n)
//not considered : if n>strlen(src) 
# include <stdio.h>
# include <string.h>
char *pstrncat(char *,char *,int);
int main()
{
	int n=4;
	char dest[40] = "Prakash";
	char src[10] = "Chatty";

	// using builtin function
	char dest1[40];
	char src1[10];
	strcpy(dest1,dest);
	strcpy(src1,src);
	strncat(dest1,src1,n);
	puts(dest1);

	//implementation
	pstrncat(dest,src,n);
	return 0;
}
char *pstrncat(char *dest,char *src,int n)
{
	int i,j;
	char *temp;
	temp = dest;
	for(i=0;dest[i] != '\0';i++);
	for(j=0; j<n; j++)
	{
		dest[i+j]=src[j];
	}
	dest[i+j]='\0';
	return temp;
}
