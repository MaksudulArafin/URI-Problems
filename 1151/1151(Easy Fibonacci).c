#include<stdio.h>

int main()
{
    int i,j,x,a,b=0,c=1;
    scanf("%d",&x);
    for(i=0;i<x-1;i++)
    {
        printf("%d ",b);
        a=b+c;
        c=b;
        b=a;
    }
    printf("%d",b);
    return 0;
}
