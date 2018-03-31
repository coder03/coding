// program that prints its input one word per line

#include<stdio.h>
main()
{
	int ch;
	while ( (ch = getc(stdin)) != EOF)
	{
		if(ch == ' ' || ch == '\t')
		{
			printf("\n");
		}
		else 
			putc(ch, stdout);
	}
}
