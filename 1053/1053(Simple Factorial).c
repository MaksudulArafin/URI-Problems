#include<stdio.h>

int main()
{
    int a,x,i,sum=1;
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        sum=(x-i)*sum;
    }
    printf("%d\n",sum);
    return 0;
}
