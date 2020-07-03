#include<stdio.h>
int ucnn(int a, int b){
while( a != b){
	if( a > b){
	a = a -b;
	}	else
	b = b -a;
}
       	return a;}
int main() {
	int a, b;
	printf("\n input a,b:");
	scanf("\n %d%d", &a,&b);
printf("\n ucnn = %d", ucnn(a , b));
return 0;
}

