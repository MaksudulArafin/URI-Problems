#include<stdio.h>
int Banknotes();
int Coins();

int main()
{
    int N,n,a,b;
    scanf("%d.%d",&N,&n);
    printf("NOTAS:\n");
    a=Banknotes(N);
    b=Coins(n);
    return 0;
}

int Banknotes(int N)
{
    int ar1[7]={100,50,20,10,5,2,1};
    int ar2[7];
    for(int i=0;i<7;++i)
    {
        ar2[i]=N/ar1[i];
        N=N%ar1[i];
    }
    for(int j=0;j<6;++j)
    {
        printf("%d nota(s) de R$ %d.00\n",ar2[j],ar1[j]);
    }
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ %d.00\n",ar2[6],ar1[6]);

    return 0;
}
int Coins(int n)
{
    int ar4[5]={50,25,10,5,1};
    int ar5[5];
    float ar3[5]={0.50,0.25,0.10,0.05,0.01};
    for(int i=0;i<5;++i)
    {
        ar5[i]=n/ar4[i];
        n=n%ar4[i];
    }
    for(int j=0;j<5;++j)
    {
        printf("%d moeda(s) de R$ %.2f\n",ar5[j],ar3[j]);
    }
    return 0;
}
