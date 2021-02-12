#include<stdio.h>


int main()
{
    int i,X,Y,sum=0;
    scanf("%d%d",&X,&Y);
    if(Y<X)
    {
        int temp=Y;
        Y=X;
        X=temp;
    }
    for(i=X; i<=Y; i++)
    {
        if(i%13!=0)
        {
            sum=sum+i;
        }
    }
    printf("%d",sum);
    return 0;
}
