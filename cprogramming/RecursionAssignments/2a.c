// program to reverse without using static

void rev(char *, char *);
#include<string.h>
#include<stdio.h>
int main()
{
	char *s1;
	char *s2;
	int n;
	printf("Enter the string\n");
	scanf("%s",s1);
	n = strlen(s1);
	*s1 = (char *) malloc(sizeof(char)*n);

	s2 = s1 + strlen(s1) - 1;
	rev(s1,s2);
	printf("%s\n",*s1);
	return 0;
}
void rev(char *s1,char *s2)
{
	char temp;
	if(s1 > s2)
		return;
	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
	return rev(++s1, --s2);
}

	
