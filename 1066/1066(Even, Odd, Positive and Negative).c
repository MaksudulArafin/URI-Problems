#include<stdio.h>

int main()
{
    int sum1=0,sum2=0,sum3=0,sum4=0,x,i;
    for(i=0; i<5; i++)
    {
        int x;
        scanf("%d",&x);
        if(x>0)
        {
            sum1=sum1+1;
        }
        else if(x<0)
        {
            sum2=sum2+1;
        }
        if(x%2 == 0)
        {
            sum3=sum3+1;
        }
        else
        {
            sum4=sum4+1;
        }

    }
    printf("%d valor(es) par(es)\n",sum3);
    printf("%d valor(es) impar(es)\n",sum4);
    printf("%d valor(es) positivo(s)\n",sum1);
    printf("%d valor(es) negativo(s)\n",sum2);

    return 0;
}
