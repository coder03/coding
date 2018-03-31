/* replace all tab by \t, eact backspace by \b and each backslash by \\
*/

#include<stdio.h>
int main()
{
	int ch;
	while( (ch = getchar()) != EOF)
	{
		if(ch == '\t')
		{
			printf("\\t");
		}
		else if(ch == '\\')
		{
			printf("\\\\");
			
		}
		else if(ch == '\b') // how to give backspace as input in terminal? did yo figure yet?
		{
			printf("\\b");
			
		}
		else
		{
			putchar(ch);
		}
	}
}
