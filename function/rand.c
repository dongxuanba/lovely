#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int key;

int main()
{
  srand((unsigned)time(NULL));
     for (int i=1;i<=7;i++)
         key=key*10+(rand()%10);
  printf("%d\n",  key);

}
