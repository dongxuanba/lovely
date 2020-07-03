#include<stdio.h>

void input(int *arr , int *n){
    while((*n)<=0){
        printf(" input the number of elements: ");
        scanf("%d",n);
// 
    }pointer
    int i;
    for( i=0; i<(*n); i++){
        printf("\narr[%d] =", i);
        scanf("%d",n);
/* code */
    }
}
void minMax(int *arr, int n, int *min, int *max){
    int i;
    for(i = 1; i<n; i++){
        if((*min)> arr[i]){
            (*min) = arr[i];

        }
        if((*max)< arr[i]){
                (*max) = arr[i];
        }
    }
}
void Solution(int min, int max){
    if(min ==max){
        printf("\n there are no the greatest element, no smallest elenment!! cause min = %d = max = %d\n",min,max);
    }else
    {/* code */
        printf("\n Min =%d\n Max =%d\n",min,max);
    }
    
}
int main(){
    int n = 0;
    int arr[100];
    input(arr, &n);
    int min = arr[0], max = arr[0];
    minMax(arr, n, &min, &max);
    Solution(min,max);
    return 0;
}