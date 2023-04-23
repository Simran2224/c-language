#include"stdio.h"
int main()
{
    int a,b,s;
    printf("enter a value");
    scanf("%d",&a);
    for(b=0;a>0;++b)
        a=a/10;
        printf("%d",b);
    return 0;
}