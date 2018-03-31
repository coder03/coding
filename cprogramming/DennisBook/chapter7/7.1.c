/* 	program that convers upper to lower or lower to 
*	upper depending on the name it is invoked with, as found 
*	in argv[0] 
*
*/

#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(int argc, char *argv[])
{
	int c;
	printf("argv[0]=%s\n",argv[0]);
	if ( strcmp(argv[0], "./lower") == 0)
		while( (c = getchar()) != EOF)
			putchar(tolower(c));
	else
		while( (c = getchar()) != EOF)
			putchar(toupper(c));
	return 0;
}

