#include<stdio.h>
#define Period '.'
int main() {
	char C;
	while (( C = getchar ()) != Period)
		putchar(C);
	printf("Good Bye. \n");
return 0;
}
