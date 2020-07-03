#include<stdio.h>
int main()
{
	int n,m, abs, max;
	printf("Enter a possitive of negative integer: ");
	scanf("%i", &n);
	printf("\n you entered %i.\n",n);
	abs = n < 0 ? -n : n;
	printf("its absolute value is %i.\n",abs);
	printf("\nEnter two integers : ");
	scanf("%i %i", &n,&m);
	printf("\n You entered %i and %i.\n", n,m);
	max = n > m ? n : m ;
	printf("%i is the larger value.\n", max);
	return 0;
}
