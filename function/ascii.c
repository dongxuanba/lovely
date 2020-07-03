#include <stdio.h>
#include <stdlib.h>

int main(){
	int i;
	FILE *f = fopen("ANSI.txt", "w+");
	for(i = 0; i <= 31; i++) {
		printf("%d = %c\n",i,i);
		fprintf(f, "%d = %c\n", i, i);
	}

	printf("Special Characters: (32-47)\n");
	fprintf(f, "Special Characters: (32-47)\n");
	for(i = 32; i <= 47; i++) {
		printf("%d = %c\n", i, i);
		fprintf(f, "%d = %c\n", i, i);
	}

	printf("Numbers: \n");
	fprintf(f, "Numbers: \n");
	for(i=48;i<=57;i++)	{
		printf("%d = %c\n",i,i);
		fprintf(f, "%d = %c\n", i, i);
	}

	printf("Upper Characters:\n");
	fprintf(f, "Upper Characters:\n");
	for(i=65;i<=90;i++)	{
		printf("%d = %c\n",i,i);
		fprintf(f, "%d = %c\n", i, i);
	}

	printf("Lower Characters:\n");
	fprintf(f,"Lower Characters:\n");
	for(i = 97; i <= 122; i++){
		printf("%d = %c\n",i,i);
		fprintf(f, "%d = %c\n", i, i);
	}
	fclose(f);
}
