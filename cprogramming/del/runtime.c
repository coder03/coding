// Demonistrate malloc and #ifdef

#define temp 1
#include<stdio.h>
int *p, *q;
int main()
{
	int n,i, sum = 0;
	p = (int *) malloc(sizeof(int));
	n = 0;
	#ifdef temp
		printf("P's contant = %u",p);
	#endif
	while(1)
	{
		if(scanf("%d",(p+n)) != 1)
		{
			#ifdef temp
				printf("%u", (p+n));
			#endif
			break;
		}
		n++;
		q = p;
		p = (int *) malloc ((n+1)*sizeof(int));
		for (i=0 ; i<n ; i++)
			p[i] = q[i];
	}
	for(i=0; i<n ; i++)
		sum +=p[i];
	printf("%d",sum);
	return 0;
}
