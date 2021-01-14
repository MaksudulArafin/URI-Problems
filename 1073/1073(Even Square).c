#include<stdio.h>

int main()
{
    long int N,x,i;
    scanf("%ld",&N);
    if(5<N<2000)
    {
        for(i=1; i<=N; i++)
        {
            if(i%2 == 0)
            {
                x=pow(i,2);
                printf("%d^2 = %ld\n",i,x);
            }
        }
    }
    return 0;
}
