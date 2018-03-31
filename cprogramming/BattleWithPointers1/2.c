//pass a double and print in funcion

#include<stdio.h>
void doub(double *);
int main()
{
	double a;
	printf("Enter the double value\n");
	scanf("%lf",&a);	
	doub(&a);
	return 0;
}

void doub(double *b)
{
	printf("Displaying double value: %.3lf\n", *b);  // print only 3 decimals after a decimal point.
}
