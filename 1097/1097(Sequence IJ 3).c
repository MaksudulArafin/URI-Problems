#include<stdio.h>

int main()
{
    int i,j,sum = -1,sum1 = 3;

    for(i=0; i<5; i++)
    {
        sum1 += 5;
        sum += 2;

        for(j=0; j<3; j++)
        {
            sum1 -= 1;
            printf("I=%d J=%d\n",sum,sum1);
        }
    }

    return 0;
}
