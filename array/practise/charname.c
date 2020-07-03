#include<stdio.h>
int main(){
    int *a, *b;
    int i;
    int max = a[0];
    do {
        for(i=0; i<(*b) ; i++){
            printf( "input a[i]:%ls",&a[i] );
            //scanf( "%d", &a[i] );
            if(max < a[i]){
                max = a[i];
            }
        }
       // printf( "the greatest elemennt in array is : %d\n", max );
    }while (a[i++]!=0);
    return max;
    return 0;
}