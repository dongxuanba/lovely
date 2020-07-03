#include<stdio.h>
#include<conio.h>
#define Max 20
//declearation void input(float); void output(float); void add(float, float,float)
int n;
float max(float a[][Max])
{
    float max;
    max = a[0][0];
    for(int i =0; i< n; i++) 
        for(int j =0; j< n; j++)
        if (max < a[i][j]) max = a[i][j];
        return max;
}
void input(float a[][Max])
{
    for(int i =0; i< n; i++)
        for(int j =0; j< n; j++)
        {
            printf("input two elements parale arrayp[%d][%d]", i, j);
            scanf("%f", &a[i][j]);
        }


}
void output(float a[][Max])
{
    for(int i =0; i< n; i++)
    {
        for(int j =0; j< n;j++)
            printf("%5.2f",a[i][j]);
            printf("\n");

    }
}
//fuction adding input output
void add(float a[][Max],float b[][Max],float c[][Max])
{
    for(int i =0; i< n; i++)
        for( int j =0; j< n; j++)
            c[i][j] = a[i][j] + b[i][j];
}


void main(void) 
{
    float a[Max][Max], b[Max][Max],c[Max][Max];
    printf("input level matrix : ");
    scanf("%d", &n);
    printf(" input data matrix a :\n ");
    input(a);
    printf(" input data matrix b :\n");
    input(b);
    printf(" input data matrix c :\n ");
    input(c);
    add(a,b,c);
    printf("Matrix a: \n");
    output(a);
    printf("Matrix b: \n");
    output(b);
    printf("Matrix c: \n");
    output(c);
    printf("the greatest number in Matrix c is %5.2f.\n" max(c));
    getch();
}
