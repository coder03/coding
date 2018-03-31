#include<stdio.h>
#include<string.h>
int getline1(char s[],int nlines)
{
	int c, i;
	i = 0;
	while(--nlines > 0 && (c = getchar()) != EOF && c != '\n')
		s[i++] = c;
	if (c =='\n')
		s[i++] = c;
	s[i] = '\0';
	return i;
}
