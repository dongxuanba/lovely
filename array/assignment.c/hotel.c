#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MaxRoom 20
int findingAvailableRoom(int x, int y){
    int a[MaxRoom];
    x = 1 + rand() % MaxRoom;
    y = x + rand() % MaxRoom;
    printf(" available room number[%d]\n",y );
}
int main(){
    printf("===========MENU==========\n");
    printf("1.Lists of available rooms\n2.Lists of hired room.\n3.charged room.\n4.Exit.\n");
    int managerHotle;
    do{
    printf(" what's the item you choose: ");
    scanf("%d",&managerHotle);
    if( managerHotle <= 0 && managerHotle <= 4 ){
    switch (managerHotle){
        case 1 : {
            int a[MaxRoom];
            int x,y;
            findingAvailableRoom(x,y);
            break;
        }
        case 2 : {
        }
        case 3 : {
        }
        case 4 : {
                break;
        }
                        }
        }else
        {
            printf(" please! Enter what's your intention.\n");
        }
        
    }while(managerHotle != 4);
    return 0;
}