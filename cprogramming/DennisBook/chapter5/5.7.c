#include<stdio.h>
#include<string.h>
#define MAXlINES 5000

int main()
{
	int nlines;
	if( (nlines = readline(lineprt, MAXLINES)) > 0)
	{
		qsort(lineptr,0,nlines-1);
		writelines(linptr,nlines);
		return 0;
	} else {
		printf
