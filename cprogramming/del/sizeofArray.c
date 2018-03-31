// illustiate sizeof(array) = array length * sizeof(array type)

#include<stdio.h>
#include<stdio.h>
int main()
{
	int a[] = {1,2,3,4,5};
	printf("%d\t %d\t",sizeof(*a),sizeof(a));
	return 0;
}

// output : 4	20
