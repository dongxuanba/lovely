#include<stdio.h>
#define Max 20
//int max(int , int);
int max(int a[], int n)
{
    int i, max;max = a[0];
    for(i = 1; i< n ; i++)
    if(max < a[i])
        max = a[i];
        return max;
}
int main(){
    int a[Max];

    int i =0 ,num;
    do{
        printf("input a number : ");
        scanf("%d",&a[i]);
    
    }while(a[i++] !=0);
    i--;
    num = max(a,i);
    printf("the greatest number is: %d.\n", num);
    return 0;
}