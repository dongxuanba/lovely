#include<stdio.h>
double square(double a)
{
	return a*a;
}
int main() {
	double num = 0.0;
       double	sqr = 0.0;
	printf("\n input a number \n");
	scanf("%lf", &num);
	sqr = square(num);
	printf("square of %g  is  %g\n", num, sqr);
	return 0;
}
