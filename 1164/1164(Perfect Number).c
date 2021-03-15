#include<stdio.h>

int main()
{
    int d,x,j,i,sum,y;
    scanf("%d",&x);
    for(j=1;j<=x;j++)
    {
        scanf("%d",&y);

        for(i=1; i<=y ;i++)
        {
            if(y%i == 0)
            {
                sum+=i;
            }
        }
        d=sum-y;
        if(d == y)
        {
                printf("%d eh perfeito\n",y);
                break;
        }
        else
        {
                printf("%d nao eh perfeito\n",y);
                break;
        }

    }
    return 0;
}
