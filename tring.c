#include<stdio.h>

int main() {
	int *ptr;
	int x = 12345, y;

	ptr = &x;
	printf("The value of ptr is %p\n", ptr);
	printf("The address of x is %p\n\n", &x);

	printf("Total characters printed on this line is: %n", &y);
	printf("%d\n\n", y);

	y = printf( "this is line has 28 characters\n");
	printf( "%d characters were printed \n\n", y);
	printf( "printing a %% is a fomat control string\n");
	printf("%10s%10d%10c%10f\n\n", "hello", 7, 'a', 1.23);
	printf("%-10s%-10d%-10c%-10f\n", "hello", 7, 'a', 1.23);
	return 0;
}
