#include<stdio.h>
int main(int argc, char **argv)
{
	char t[10];
	int i=0;
	char c;
	while( (c=*++argv[1]) && c != '\0')
		printf("%c\t",c);
		;
	printf("%d\n",(atof("46.34")) );
	return 0;
}
