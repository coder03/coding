// Displays full ASCII table or fa a character.. please put in half screen for better readibility.
#include<stdio.h>
int main(int argc, char *argv[])
{
	int i;
	int ch;
	if(argc > 2)
	{
		printf("Usage: ASCII <character>\n");
	}
	if(argc == 1)
	{
		printf("ASCII value table:\n");
		for(i=0;i <= 255; i++)
			printf("%3d=%-4c",i,i);
		printf("\n\n******To find ASCII of character use: ASCII <character>***\n");
		printf("Run in half screen mode for better display\n");
		return 0;
	}
	else if(argc == 2)
	{
		ch = (*++argv)[0];
		printf("ASCII OF \"%s\"=%-3d\n",*argv, ch);
	}
	return 1;
}	
