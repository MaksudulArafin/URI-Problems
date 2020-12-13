#include<stdio.h>
float MOEDAS();
int NOTAS();
float n;

int main()
{
    scanf("%f",&n);
    printf("NOTAS:\n");
    NOTAS();
    printf("MOEDAS:\n");
    MOEDAS();
    return 0;
}

int NOTAS()
{
    if(0 <=n<= 1000000.00)
    printf("%d nota(s) de R$ 100.00\n",(int)n/100);
    printf("%d nota(s) de R$ 50.00\n",((int)n%100)/50);
    printf("%d nota(s) de R$ 20.00\n",(((int)n%100)%50)/20);
    printf("%d nota(s) de R$ 10.00\n",((((int)n%100)%50)%20)/10);
    printf("%d nota(s) de R$ 5.00\n",(((((int)n%100)%50)%20)%10)/5);
    printf("%d nota(s) de R$ 2.00\n",((((((int)n%100)%50)%20)%10)%5)/2);
    return 0;
}
float MOEDAS()
{
    printf("%d moeda(s) de R$ 1.00\n",(((((((int)n%100)%50)%20)%10)%5)%2)/1);
    n=n-(int)n;+
    n=n*100;
    printf("%d moeda(s) de R$ 0.50\n",(int)n/50);
    printf("%d moeda(s) de R$ 0.25\n",(((int)n%50)/25));
    printf("%d moeda(s) de R$ 0.10\n",((((int)n%50)%25)/10));
    printf("%d moeda(s) de R$ 0.05\n",(((((int)n%50)%25)%10)/5));
    printf("%d moeda(s) de R$ 0.01\n",(((((((int)n%50)%25)%10)%5)/1)));
    return 0;
}
