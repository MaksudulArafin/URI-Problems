#include<stdio.h>

int main()
{
    int j,N,X,i,sum;

    scanf("%d",&N);
    for(i=0; i<N; i++)
    {
        scanf("%d",&X);
        for(j=2,sum=0; j<X; j++)
        {
            if(X%j == 0)
            {
                sum++;
            }
        }
        if(sum != 0)
        {
            printf("%d nao eh primo\n",X);
        }
        if(sum == 0)
        {
            printf("%d eh primo\n",X);
        }
    }
    return 0;
}
