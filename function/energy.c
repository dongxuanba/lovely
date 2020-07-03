#include<stdio.h>
#include<math.h>
int energy(int m ,int v)
{
	return m*v*v;
}
int prime(int a)
{
	for(int  i =2; i<= sqrt(a); i++){
		if(a%i == 0){
			return 0;
		}
	}
	return 1;
}
int main(void)
{
int num = 0, i = 0;
/* Get input from user */
	printf("enter a positive integer\n");
	scanf("%d", &num);
	printf("prime numbers up to %d:\n", num);
	for (i = 2; i <= num; ++i)
		{
	if (prime(i))
	{
	printf("%d\n",i);
	}
		}	
return 0;
}

