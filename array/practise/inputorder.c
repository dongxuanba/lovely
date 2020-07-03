#include<stdio.h>
#include<string.h>
#define Maxnumber 5
#define Maxlength 10
void main(void)
{
    char cname[Maxnumber][Maxlength];
    char *cptr[Maxnumber];
    char *ctemp;
    int i, ij, icount = 0;
    while ( icount < Maxnumber )
    {
        printf("input name of peope order: %d",icount + 1);
       fgets(cname[icount]);
        cptr[icount++] = cname[icount];
    }
    for(i =0; i<icount - 1; i++)
        for(ij= i+1; ij< icount; ij++)
            if(strcmp(cptr[i],cptr[ij])> 0)
            {
                ctemp = cptr[i];
                cptr[i] = cptr[ij];
                cptr[ij] = ctemp;
            }
            printf("list of after orderation : \n");
            for(i = 0; i< icount;i++) 
            printf("the name of order people %d: %s\n", i+1, cptr[i]);
            return ;
            
}

