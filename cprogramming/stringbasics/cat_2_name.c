#include<stdio.h>
#include<string.h>
int main()
{
	char name1[50], name2[50];
	int i,j;
	printf("Enter first name\n");
	scanf("%s",name1);
	printf("Enter last name\n");
	scanf("%s",name2);
	
	for(i=0; name1[i] != '\0'; i++) // gets reads line so compare it to '\n'
	{
		printf("%c\t",name1[i]);
	}
	name1[i] = ' ';
	i++;
	printf("i=%d\n",i);
	for(j=0;name2[j] != '\0'; j++)
	{
		name1[i] = name2[j];
		i++;
	}
	
	puts(name1);
	return 0;
}
