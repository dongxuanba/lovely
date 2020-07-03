#include<stdio.h>
#include<string.h>
int main(){
    char str[256];
    int i;
    printf("Enter the string : ");
    scanf("%s", str);
    for(i=0; i<strlen(str); i++){
        if(str[i]>=65 &&str[i]<90)
            str[i] = str[i]+32;

    }
    printf("\nlower Case string is: %s\n", str);
    return 0;
}