#include<stdio.h>
#define Max 100
int main()
{
	int a[Max];
	int i,s,min;
	for ( i = 0; i< Max; i++)
	{
		printf("a[%d] = ", i) ; scanf( " %d", &a[i]);
	}
	s = 0; min = a[0];
	for ( i= 0; i < Max; i++){
		if ( a[i] < min) min = a[i];
		if( a[i]%2 == 1) s = s+ a[i];
	}
	printf("\n Minimun valu in the array : %d ", min);
	printf( "Sum of all odd numbers : %d", s);
	return 0;
}
