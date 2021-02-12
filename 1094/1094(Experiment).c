#include<stdio.h>

int main()
{
    char Type;
    int Amount,N,i,sum=0,sum1=0,sum2=0,sum3=0;
    scanf("%d", &N);

    for(i=0; i<N; i++)
    {
        scanf("%d %c", &Amount, &Type);

        sum += Amount;

        if(Type == 'C')
        {
            sum1 += Amount;
        }
        else if(Type == 'R')
        {
            sum2 += Amount;
        }
        else if(Type == 'S')
        {
            sum3 += Amount;
        }
    }
    double x=(sum1/(double)sum)*100;
    double y=(sum2/(double)sum)*100;
    double z=(sum3/(double)sum)*100;
    printf("Total: %d cobaias\n",sum);
    printf("Total de coelhos: %d\n",sum1);
    printf("Total de ratos: %d\n",sum2);
    printf("Total de sapos: %d\n",sum3);
    printf("Percentual de coelhos: %.2lf %%\n",x);
    printf("Percentual de ratos: %.2lf %%\n",y);
    printf("Percentual de sapos: %.2lf %%\n",z);

    return 0;
}
