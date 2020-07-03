#include<stdio.h>
//#include<
int main(){
    char input[100];
    int index;
    printf("input the String value\n");
    gets(input);
    for(index = 0;input[index] != '\0';index++){
        printf("%c", input[index]);
        printf("\n");


    }
    printf("Done\n");
    return 0;
}