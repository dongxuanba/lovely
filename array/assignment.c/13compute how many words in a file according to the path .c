#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE * file;
    char path[100];
    char ch;
    int characters, words,vipwords,totalwords;
    printf("Enter source file path: ");
    scanf("%s", path);
    file = fopen(path, "r");
    if (file == NULL){
        printf("Error opening file\n");
        printf("Please check if file exist and you have read privilege file");
        exit(EXIT_FAILURE);
    }
    characters = words = vipwords = totalwords = 0;
    while( ch = fgetc(file)  != EOF )
    {
        if( ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0'){
            totalwords++;
            characters = 0;

        }else{
            characters++;
            if(characters >= 8){
            vipwords++;
            }else{
            words ++;
            }
            }
    }
    printf("the total word in the file is : %d\n",totalwords);
    printf(" the number of normal words is : %d\n", words);
    printf( " the number of words have more than 8 characters is : %d\n", vipwords);
    fclose(file);

    return 0;
    


}# mentionally
