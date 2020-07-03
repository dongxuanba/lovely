#include<stdio.h>

void nhap( int *arr, int *n)    {


   while((*n) <= 0){
        printf("input n > 0:");
        scanf("%d", n);
    }

int  i ;
for (i = 0; i < *n; i++) {
    printf("\n arr[%d] = ", i);
    scanf( "%d", &arr[i]);
}
}

void minMax(int *arr, int n, int *min, int *max) {
    int i;for( i = 1; i < n; i++ ){
        if ((*min) > arr[i]){
            (*min) = arr[i];
        }
    	if((*max) < arr[i]){
        (*max) = arr[i];

    }
}
}
void result(int min , int max ) {
    if (min = max){
        printf("\n there no smallest and greatest cause min equal with max");
    }
    else
{
    printf("\n Min = %d \n Max = %d\n", min , max);




}
}
int main() {
    int n = 0;
    int arr[100];
    nhap(arr, &n);
    int min = arr[0], max = arr[0];
    minMax(arr, n, &min, &max);
    result(min, max);
    return 0;
}

    
