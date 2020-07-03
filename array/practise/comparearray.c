#include<stdio.h>
#define Max 20
int max(int a[], int n)
{
    int i, max;
    max = a[0];
    for(i=1;i<n; i++)
        if(max < a[i])
            max = a[i];
            return max;
}
int input(int a[])
{
    int i= 0;
    do
    {
        printf("input a number ; ");
        scanf("%d", &a[i]);
    } while (a[i++]!=0);
    i--;
    return i;
}
int main() {
    int a[Max],b[Max],c[Max];
    int num1, num2, num3;
    printf("input data for array a: \n");
    num1 = max(a, input(a));
    printf("input data for array b: \n");
    num2 = max(b, input(b));
    printf("input data for array c: \n");
    num3 = max(c, input(c));
    printf( " the greatest number of array a is %d,\n b is %d,\n is c %d",num1,num2,num3);
    return 0;   
}