#include<stdio.h>
main()
{
    int i,j;
    
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
            if(j==1||j==5||i==3&&j==3||i==4&&j!=3)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        printf("\n");    
    }
}    