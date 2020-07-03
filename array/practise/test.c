#include<stdio.h>
#define Max 50
int main()
{
    int a[Max][Max], i,j,n;
    printf("\ninput level of Matrix:\n ");
    scanf("%d", &n);
    
    for(i=0;i<n;i++)
        for(j = 0; j< n; ++j)
        {
            printf("\ninput the element a[%d][%d]: \n", i+1,j+1);
            scanf("%d",&a[i][j]);
        }
        for(i= 0; i< n; i++)
        {
            for(j = 0; j< n; ++j)
                printf("%3d",a[i][j]);
            printf("\n");
        }
        printf("\n");

        for(i = n-1; j>= 0;j--)
            printf("%3d",a[i][j]);
            printf("\n");
        return 0;
}