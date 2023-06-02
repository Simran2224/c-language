#include"stdio.h"
int main()
{
    int i=1,a,b;
    printf("enter values");
    scanf("%d",&a);
    while(i<=10)
    {
        b=2*i-1;
        printf("%d\n",b);
        i++;
    }
    return 0;
}