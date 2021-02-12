#include<stdio.h>

int main()
{
    int i,j,sum = 0, sum1 = 0,sum2;
    for(i=0; i<3; i++)
    {
        sum1 += 1;
        printf("I=%d J=%d\n",sum,sum1);
    }
        sum1=0;


    for(i=0; i<4; i++)
    {
        sum1 += 2;
        sum2 = 0;
        for(j=0; j<3; j++)
        {
            sum2 += 1;
            printf("I=0.%d J=%d.%d\n",sum1,sum2,sum1);
        }
    }

    sum=1;
    sum1=1;
    for(i=0; i<3; i++)
    {
        sum1 += 1;
        printf("I=%d J=%d\n",sum,sum1);
    }

    sum=sum1=0;
    for(i=0; i<4; i++)
    {
        sum1 += 2;
        sum2 = 1;
        for(j=0; j<3; j++)
        {
            sum2 += 1;
            printf("I=1.%d J=%d.%d\n",sum1,sum2,sum1);
        }
    }


    sum=2;
    sum1=2;
    for(i=0; i<3; i++)
    {
        sum1 += 1;
        printf("I=%d J=%d\n",sum,sum1);
    }
    return 0;
}
