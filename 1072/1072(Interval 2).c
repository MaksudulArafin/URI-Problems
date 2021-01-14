#include<stdio.h>
#include<math.h>

int main()
{
    int N,i,sum1=0,sum2=0;
    long int X;
    scanf("%d",&N);
    if(N<10000)
    {
        for(i=0; i<N; i++)
        {
            scanf("%ld",&X);

            if((pow(-10,7)) < X < (pow(10,7)))
            {
                if(X>=10 && X<=20)
                {
                    sum1++;
                }
                else
                {
                    sum2++;
                }
            }
        }
        printf("%d in\n",sum1);
        printf("%d out\n",sum2);

    }
    return 0;
}

