// implement char *strcpy(char *dest,const char *src)

#include<stdio.h>
#include<string.h>
char *pstrcpy(char *,char *);
int main()
{
	char *src="hey buddy";
	char *dest;
	dest = pstrcpy(dest,src); // do malloc on dest if yo change this statement as <pstrcpy(dest,src)>
	while(*dest != '\0')     // printf("%s\n",dest); will work too
	{
		printf("%c",*dest);
		dest++;
	}
	printf("\n");
	return 0;
}
char *pstrcpy(char *dest,char *src)
{
	dest = src;
	return dest;
}
