#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void Num_Rooom( int a[10], int b, int c)
{
    b = 2 + rand() % 10;
    c= 10 - b;
        printf( "the rooms are hired:\n" );
    for( int i= 1; i< b; i++ ) {
        //printf( "the rooms are hired:\n" );
        printf( "number a[%d]\n", i );
    }
        
}
void paycharged( int paying){
    
        printf(" which is the kind of rooms:\n1. Normal rooom.\n2. convinent rooom.\n3. vip rooom.");
    switch(paying){
        case 1:{
            int x, y;
            printf( "The time of using rooom:%d hours",x );
            scanf( "%d ", &x );
            y= 25000*x;
            printf( "the total fees is : %ls", &y );
        }
            case 2:{
            int x, y;
            printf( "The time of using rooom:%d hours",x );
            scanf( "%d ", &x );
            y= 50000*x;
            printf( "the total fees is : %ls", &y );

        }
            int x, y;
            printf( "The time of using rooom:%d hours",x );
            scanf( "%d ", &x );
            y= 100000*x;
            printf( "the total fees is : %ls", &y );
    }
}


int main()
{  
   printf("=============================MENU=================================\n1. available rooms.\n2. pay charge.\n3. list of available rooms.\n4. roms are hired.\n5. Exit.\n");


    int x,y,z; 
    int hello;
    int a[10];
    int b, c;
    c =10 -b;
    int paying;
    do{
        switch(hello){
            case 1 : {
                    
            }
            case 2 : {
                paycharged(paying);

            }
            case 3 : {

            }
            case 4 : {

            }
            case 5 :  
                 printf("you are out");
                 break; 
            
        }
    //Num_Rooom(a,b,c);
    }while(hello != 5);
    return 0;
}

