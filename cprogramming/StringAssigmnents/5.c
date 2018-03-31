//implement strlen using pointers

# include <stdio.h>
int pstrlen(char *);
int main(int argc,char *argv[])
{
	int len;
	char *temp;
	temp = argv[1];
	if(argc != 2)
		printf("Plz enter in format: ./a.out <string1>\n");
	len = pstrlen(argv[1]);
	printf("pstrlen(%s) = %d\n",temp,len);
	return 0;
}

int pstrlen(char *argv1)
{
	int len =0;
	while(*argv1 != '\0')
	{
		len++;
		*argv1++;
	}
	return len;
}
		
