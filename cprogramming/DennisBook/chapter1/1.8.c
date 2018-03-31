// count blanks tabs and newlines
// *********** "cnt + D" on keyboard is the signal for EOF in stdin(terminal) 
#include<stdio.h>
int main()
{
	int ch;
	int new_lines=0, spaces = 0, tabs = 0;
	while( (ch = getchar()) != EOF )
	{
		if(ch == '\n')
			new_lines++;
		else if (ch == ' ')
			spaces++;
		else if( ch == '\t')
			tabs++;
	}
	printf("new lines = %d\n spaces = %d\n tabs = %d", new_lines,spaces,tabs);
}
