/*#include<stdio.h>
int main(){
    int x, y,z ; 
    int* ptr;
    printf("input three numbers : ");
    scanf("%d %d %d", &x, &y, &z);
    printf(" the number were inputted is: \n");
    ptr = &x;
    printf("hello  %d\n", *ptr);
    ptr = &y;
    printf("hello  %d\n", *ptr);
    ptr = &z;
    printf( "hello %d\n", *ptr);
    return 0;



void swap(int x, int y)
{
    int tmp = x;
    x = y;
    y = tmp;
    
}

void swap(int *x, int *y){
    int tmp = *x;
    *x = *y;
    *y = tmp;
}
}*
#include<stdio.h>
int main() {
    int a[7]= {13, 3434 , 5454 ,34,345, 899, 5};
    int i;
    printf(" address of first element in memory .\n");
    for (i=0; i<7; i++) printf("\ta[%d]", i);
    printf("\n");
    for (i=0; i<7; i++) printf("\t%d", a[i]);
    return 0;

}*/
#include<stdio.h>
int main(){
    int x= 25,y= 50,z= 75;
    int* ptr;
    ptr = &x;
    *ptr += 100;
    ptr = &y;
    *ptr += 100;
    ptr = &z;
    *ptr += 100;
    printf( "out put hello x,y,z\n" );
    printf(" %d %d %d\n",x,y,z);
    return 0;

}# code-together
