#include<stdio.h>
int max(int a[], int n)
{
    int max = a[0];
    for(int i = 1 ; i< n; i++)
    if(max < a[i]) max = a[i];
    return max;
}
int min(int a[], int n)
{
    int min = a[0];
    for(int i = 1 ; i< n; i++)
        if(min > a[i])
        min = a[i];
        return min;
}
void input(int a[], int n)
{
    for (int i = 0 ; i< n ; i++)
    {
        printf("input the number of elements: a[%d]:", i);
        scanf("%d", &a[i]);


    }
}
int main()
{
    int a[10000];
    int n ;
    printf("\ninput n = " );
    scanf("%d", &n);
    input(a,n);
    printf("\nMax = %d\n", max(a,n));
    printf("\nMin = %d\n", min(a,n));
    return 0;

}
