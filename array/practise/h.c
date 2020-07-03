#include<stdio.h>
#define Max 5
int H[Max][Max] = {{1,0,0,0,1},
                       {1,0,0,0,1},
                       {1,1,1,1,1},
                       {1,0,0,0,1},
                       {1,0,0,0,1}};
int main(){ 
    int i,j;for(i=0;i<Max; i++)
    {
        for(j=0;j<Max; j++)
        if(H[i][j])
        printf("*");
        else
        {
            printf(" ");
        }
        printf("\n");
        
    }
    return 0;

   }                       