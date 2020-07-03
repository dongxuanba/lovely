#include<stdio.h>
int main()
{
	int i,in,is;
	printf("\n input:");
	scanf("\n %d",&in);
	do{
	is = 0;
	for(i =0; i<=in; i++)
	{

		printf("%ls", &i);
		if(i%2 != 0)
		is = is + i ;
	}
	printf("toang:%d", is);
	break;
	}while(i != 0);
	return 0;
}
