#include<stdio.h>

int main()
{
    int ar[10];
    int sum1,sum2;
    for(int i=0; i<5; i++)
    {
        scanf("%d",&ar[i]);
        if(ar[i]>0)
            sum1++;
        else

    }
    printf("%d valor(es) positivo(s)\n",sum1);
    printf("%d valor(es) negativo(s)\n",sum2);

    return 0;
}
