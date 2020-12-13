#include<stdio.h>

int main()
{
    int N,N1,N2,N3,N4,N5,N6,N7,N8,N9,N10,N11,N12,N13;
    scanf("%d",&N);
    printf("%d\n",N);
    if(0<N<1000000)
    {
       N1=N/100;
       if(N1>0)
       printf("%d nota(s) de R$ 100,00\n",N1);
       else
        printf("0 nota(s) de R$ 100,00\n");
       N2=N-N1*100;
       N3=N2/50;
       if(N3>0)
       printf("%d nota(s) de R$ 50,00\n",N3);
       else
        printf("0 nota(s) de R$ 50,00\n");
       N4=N2-N3*50;
       N5 = N4/20;
       if(N5>0)
        printf("%d nota(s) de R$ 20,00\n",N5);
       else
        printf("0 nota(s) de R$ 20,00\n");
       N6=N4-N5*20;
       N7=N6/10;
       if(N7>0)
        printf("%d nota(s) de R$ 10,00\n",N7);
       else
        printf("0 nota(s) de R$ 10,00\n");
       N8=N6-N7*10;
       N9=N8/5;
       if(N9>0)
        printf("%d nota(s) de R$ 5,00\n",N9);
       else
        printf("0 nota(s) de R$ 5,00\n");
       N10=N8-N9*5;
       N11=N10/2;
       if(N11>0)
        printf("%d nota(s) de R$ 2,00\n",N11);
       else
        printf("0 nota(s) de R$ 2,00\n");
       N12=N10-N11*2;
       N13=N12/1;
       if(N13>0)
        printf("%d nota(s) de R$ 1,00\n",N13);
       else
        printf("0 nota(s) de R$ 1,00\n");
    }
       return 0;

}
