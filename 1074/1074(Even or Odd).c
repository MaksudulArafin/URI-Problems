#include<stdio.h>
#include<math.h>

int main()
{
    int N,i;
    long int X;
    scanf("%d",&N);
    if(N<10000)
    {
        for(i=0; i<N; i++)
        {
            scanf("%ld",&X);

            if((pow(-10,7)) < X < (pow(10,7)))
            {
                if(X==0)
                {
                    printf("NULL\n");
                }
                else if(X%2 == 0 && X>0)
                {
                    printf("EVEN POSITIVE\n");
                }
                else if(X%2 == 0 && X<0)
                {
                    printf("EVEN NEGATIVE\n");
                }
                else if(X%2 != 0 && X>0)
                {
                    printf("ODD POSITIVE\n");
                }
                else if(X%2 != 0 && X<0)
                {
                    printf("ODD NEGATIVE\n");
                }
            }
        }
    }
    return 0;
}
