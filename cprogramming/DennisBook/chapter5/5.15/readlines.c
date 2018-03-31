#include<stdio.h>
#include<string.h>
int getline1(char *,int);
int readlines(char *lineptr[], int MAXLINES)
{
	int len, nlines;
	char *p,line[MAXLINES];
	
	nlines =0;
	printf("Enter lines\n");
	while( (len = getline1(line,MAXLINES)) > 0 )
		if (nlines >= MAXLINES || (p = (char*) alloc(len)) == NULL) {
			return -1;
		} else {
			line[len-1] = '\0';
			strcpy(p, line);
			lineptr[nlines++] = p;
		}
	printf("successfully received %d lines\n", nlines);
	return nlines;
}
