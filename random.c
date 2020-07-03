#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int myNum , yourNum;
	srand (time (NULL)); //seed
	myNum = 1 + rand() % 10;//pick a number
	printf("Guess my number (between 1 and 10): ");
	scanf("%d", &yourNum);
	if (yourNum < myNum){
		printf("your guess was too small.\n");
	}else if ( yourNum > myNum){
		printf(" your guess was too high.\n");
	}else{
		printf("you got it !\n");
		return 0;
	}
	printf("The correct number was %d.\n", myNum);
	return 0;
}	
