#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	int chosen;
	int machine;
do{	machine = 1 + rand() % 3;
	printf(" what's the hell you chosen..?  keo = 1, bua = 2 or  boc = 3\n");
	scanf("%d", &chosen);
/*	if (machine =1) 
		machine = 'keo';
	if (machine =2) 
		machine = 'bua';
	if (machine = 3) 
		machine = 'boc';*/
if(chosen < 4 && chosen > 0){
	if(chosen = 1){
		if( machine == 1){
			printf("\n equal solution let replay it ");
			printf("\n result  your chosen is keo\n result machine is also keo\n");

	}	else if( machine	== 2){
	printf("\n you lost! stupidly chosen");
	printf("\n result  your chosen is keo\n result machine is bua\n");
		}else {
	printf("\n you win ! great!");
	printf("\n result  your chosen is keo\n result machine is boc\n");
					}
		}
}else 
printf("\n please! input keo = 1, bua = 2, boc = 3");
		
}while( chosen != 0);
return 0;
}
