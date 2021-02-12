#include<stdio.h>

int main()
{
    int i,sum=-2,sum1=65;
    for(i=0; i<=12; i++)
    {
        sum += 3;
        sum1 -= 5;
        printf("I=%d J=%d\n",sum,sum1);
    }
    return 0;
}
