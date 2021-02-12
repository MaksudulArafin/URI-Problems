#include<stdio.h>

int main()
{
    double sum=0,b=0,c;

    for(c=1; c<=100; c++)
    {
        b=1/c;
        sum=sum+b;
    }
    printf("%.2lf\n",sum);

    return 0;
}
