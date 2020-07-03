/*#include<stdio.h>
#include<string.h>
//#include<fgetstring.h>
int main(){
    char s[1024];
    printf("Enter a string to reverse\n");
    fgetstring(s);
    strreverse(s);
    printf("reverse of the string: %s\n", s);
    return 0;
}*/ // using a string in C using strrev














/*#include<stdio.h>
int main(){
    char s[1000], r[1000];
    int begin, end, count = 0;
    printf("Input a string \n");
    fgets(s);
    //Calculating string length
    while (s[count] != '0')
    count++;
    end = count - 1;
    for ( begin = 0 ; begin < count ; begin++ ){
        r[begin] = s[end];
        end --;

    }
    r[begin] = '0';
    printf("%s\n", r);
    return 0;
}
*/
//C program to reverse a string using recursion









/*






#include<stdio.h>
#include<string.h>
void reverse(char*, int , int);
int main(){
    char a[100];
    gets(a);
    reverse(a, 0, strlen(a)- 1);
    printf("%s\n", a);
    return 0;
}
void reverse(char *x, int begin, int end)
{
    char c;
    if ( begin >= end)
    return 0;
    c = *(x+begin);
    *(x+begin) = *(x+end);
    *(x+end) = c;
    reverse(x,++begin, --end);
    
}*/


#include<stdio.h>
int string_length(char*);
void reverse( char*);
main()
{
    char s[100];
    printf("Enter a string\n");
    gets(s);
    reverse(s);
    printf("Reverse of the string is "\"%s\"\n",s);
    return 0;
}
void reverse(char *s) {
    int length, c;
    char *begin, end, temp;

    length = string_length(s);
    begin = s;
    end = s + length;
    for ( c = 0; c < length - 1; c++ )
            end ++;
            for( c = 0; c< length/2; c++ )
            {
                temp = *end;
                *end = *begin;
                *begin = temp;


                begin++
                end--;

            }
}
int  string_length(char *pointer)
{
    int c = 0;
    while( *(pointer + c) !='\0')
    c++;
    return c;
}