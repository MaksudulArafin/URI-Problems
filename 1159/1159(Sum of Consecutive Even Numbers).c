#include<stdio.h>

int main()
{
    int x,j,i,sum;

    for(i=0; ;i++)
    {
        sum=0;
        scanf("%d",&x);
        if(x==0)
        {
            break;
        }
        if(x%2 == 0)
        {
            for(j=0;j<5 ;j++)
            {
                sum=sum+x;
                x=x+2;
                if(j==4)
                {
                    break;
                }
            }

        }
        else
        {
            x+=1;
            for(j=0;j<5 ;j++)
            {
                sum=sum+x;
                x=x+2;
                if(j==4)
                {
                    break;
                }
            }
        }
        printf("%d\n",sum);
    }

    return 0;
}
