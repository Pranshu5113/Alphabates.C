#include<stdio.h>
main()
{
    int i,j;
    
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
            if(i==1||j==4&&i!=5||i==4&&j==1||i==5&&j==3)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        printf("\n");    
    }
}    