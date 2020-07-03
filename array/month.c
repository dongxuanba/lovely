#include<stdio.h>
#define Months 12
int  main() 
{
	int rainfall[Months];
	int i;
	for ( i = 0; i < Months; i++){
		printf( "Enter the rainfall(mm): ");
		scanf("%d", &rainfall[i]);
	}
	for (i = 0; i< Months; i++) {
		printf("%5d", rainfall[i]);
	}
	printf("\n");
	return 0;
}
