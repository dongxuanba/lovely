#include<stdio.h>
void swap( int *a, int *b, int *c){
    int temp;
    temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}
int main(){
    int a , b , c;
    printf( "input the value of a, b, c\n");
    scanf("%d %d %d ", &a, &b, &c);
    printf( " the value of a = %d, b = %d, c = %d", a, b, c );
    swap( &a , &b , &c );
    printf( " the value after swap a,b,c is a = %d, b = %d, c = %d", a, b, c );
    return 0;
}