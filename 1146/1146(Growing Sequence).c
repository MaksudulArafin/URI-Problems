#include<stdio.h>


int main()
{
    int x,i,j;
    for(i=0; ;i++)
    {
        scanf("%d",&x);
        if(x==0)
        {
            break;
        }
        for(j=1;j<=x-1;j++)
        {
            printf("%d ",j);
        }
        printf("%d\n",x);
    }

    return 0;
}
