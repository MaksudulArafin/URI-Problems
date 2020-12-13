#include<stdio.h>
int product(int a, int b);

int main()
{
    int a,b;
    int f=product(a,b);
    printf("PROD = %d\n",f);
    return 0;
}

int product(int a , int b)
{
    int PROD;
    scanf("%d %d",&a,&b);
    PROD=a*b;
    return PROD;
}
