#include<stdio.h>

int main()
{
    int i,X,Y;
    scanf("%d%d",&X,&Y);
    if(X>Y)
    {
        int temp=X;
        X=Y;
        Y=temp;
    }
    for(i=X+1; i<Y; i++)
    {
        if(i%5==2)
        {
            printf("%d\n",i);
        }
        else if(i%5==3)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
