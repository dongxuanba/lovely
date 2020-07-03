#include<stdio.h>
#include<math.h>
int main(){

int a,b ,n;
	printf("\n input a natual number : ");
	scanf("\n %d", &b);
for(n =2; n<= b; n++)
{
	for(a =2; a< n; a++)
	{ 
		if(n%a ==0)
			break;
	}
	if( a== n)
		printf("\n prime number is %d", n);
}
	return 0;
	}	
