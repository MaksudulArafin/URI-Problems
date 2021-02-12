#include<stdio.h>

int main()
{
    int i,j,sum = -1,sum1;

    for(i=0; i<5; i++)
    {
        sum += 2;
        sum1=8;

        for(j=0; j<3; j++)
        {
            sum1 -= 1;
            printf("I=%d J=%d\n",sum,sum1);
        }
    }

    return 0;
}
