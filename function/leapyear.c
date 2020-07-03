#include<stdio.h>
int main() {
	
int a;
printf("\n input a:");
scanf("\n%d", &a);
for (int i = 2000; i <= a; i+=4)
printf("\n %d", i);
return 0;
}
