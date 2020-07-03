/*#include<stdio.h>
int main(){ 
    char line[150];
    int vowels,consonat, digit, space;
    vowels = consonat = digit = space = 0;
    printf("Enter a line of string: ");
    fgets( line , sizeof(line), stdin);
    
    for( int i = 0; line[i] != '\0'; i++ ){
        if(line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u'|| line[i] == 'A'|| line =='E' || line =='I' || line == 'O' ||line == 'U'){
            ++vowels;

        }else if((line[i] >= 'a' && line[i] <= 'z') || (line[i]>='A' && line[i]<='Z')){
            ++consonat;
        }else if(line[i] >='0' && line[i] <='9'){
            ++digit;

        }else if(line[i] ==' '){
            ++space;
        }

    }
    printf("Vowels : %d", vowels);
    printf("\nConsonats: %d", consonat);
    
    printf("\nDigit: %d", digit);
    printf("\nWhite space: %d", space);
    return 0;
}*/
#include <stdio.h>
int main() {
    char line[150];
    int vowels, consonant, digit, space;

    vowels = consonant = digit = space = 0;

    printf("Enter a line of string: ");
    fgets(line, sizeof(line), stdin);

    for (int i = 0; line[i] != '\0'; ++i) {
        if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||
            line[i] == 'o' || line[i] == 'u' || line[i] == 'A' ||
            line[i] == 'E' || line[i] == 'I' || line[i] == 'O' ||
            line[i] == 'U') {
            ++vowels;
        } else if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z')) {
            ++consonant;
        } else if (line[i] >= '0' && line[i] <= '9') {
            ++digit;
        } else if (line[i] == ' ') {
            ++space;
        }
    }

    printf("Vowels: %d", vowels);
    printf("\nConsonants: %d", consonant);
    printf("\nDigits: %d", digit);
    printf("\nWhite spaces: %d", space);
    return 0;
}




