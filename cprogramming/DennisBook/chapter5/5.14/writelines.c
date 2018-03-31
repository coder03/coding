#include<stdio.h>
void writelines(char *lineptr[], int nlines,int decr)
{
	int i;
	if(decr)
		for(i = nlines-1; i>=0 ; i--)
			printf("%s\n",lineptr[i]);
	else		
		for(i = 0 ; i < nlines; i++)
			printf("%s\n",lineptr[i]);
}
