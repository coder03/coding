#include<stdio.h>
int main()
{
	char name[100];
	int i=0;
	printf("Enter the name\n");
	/*do 
	{
		i++;
		scanf("%c",&name[i]);
	}
	while(name[i] != '\n');
	
	while(name[i-1] != '\n')
	{	
		scanf("%c",&name[i]);
		i++;
	}
	for(i=0; ; i++ )
	{
		scanf("%c",&name[i]);
		if(name[i] == '\n')
			break;
	}*/
	scanf("%[^\n]",name); // same as gets(name);
	for(i = 0; name[i] != '\0'; i++)
		printf("%c",name[i]);
	printf("\n");
	return 0;
}
