#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *src;
	char ch;
	if( (src = fopen("src.txt","r")) == NULL)
	{
		printf("Error!! so creating new file\n");
		if( (src =fopen("src.txt","w")) == NULL)
		{
			printf("couldnt creat a new file\n");
			exit(0);
		}
		else
			printf("sucessufully created a new file, write some data now\n");
	}
	do{
		ch = getchar(); // or <ch = getc(stdin)> or <fgetc(stdin)>
		fputc(ch,src);
	}while( *ch != '\n' );

	fclose(src);	
	return 0;
}
