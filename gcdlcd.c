#include<stdio.h>
#define Max 100
int ucnn( int a, int b){
while( a !=b)
if ( a> b){
	a = a - b;
} else {
	b = b - a;
}
return a;
}
int he( int x[], int n)
{
	int y = x[0];
	for(int i = 1; i < n;i ++)
	{
		y = ucnn(y,x[i]);
	}
	return y;
}
int main(){
	int x[Max];
	int a,b,c;
	printf("\n input a, :");
	scanf("%d", &a);
	printf("\n ucnn = %d", he( x , a));
return 0;
}
