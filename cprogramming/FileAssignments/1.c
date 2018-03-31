// program to open a new file , write some data and print on stdout character by charater.

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char buf;
	if( (fp = fopen("test.txt","w")) == NULL )
	{
		fprintf(stderr,"open filed\n");
		exit(1);
	}

	fputs("Hey this the file  contants",fp);
	fclose(fp);	// if we dont close then no output coz of multiple times opened i gueess.
	if( (fp = fopen("test.txt","r")) == NULL )
	{
		fprintf(stderr,"Error: open in read mode\n");
		exit(2);
	}
	while( (buf=fgetc(fp)) != EOF)	
	{	
		printf("%c",buf);
	}
	printf("\n");
	fclose(fp);
	return 0;
}
	
