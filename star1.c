#include"stdio.h"
int main()
{
    int i,j;
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=4;j++)
        {
            if(j<=5-i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
}