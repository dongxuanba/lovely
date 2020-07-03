#include<stdio.h>
#include<string.h>

void main() {
    char line [81];
    printf( "Enter a line of text : \n");
   gets(line);
    printf("Blank characters occurs for: %d time in the line.\n", spaceCounters(line));

}
int spaceCounters( char inputline []) {
    int i = 0;
    int count = 0;
    while( inputline[i] !='\0'){
        if( inputline[i] == ' '){
            count++;
        }
        i++;
    }
    return count;
}