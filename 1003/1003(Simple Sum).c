#include<stdio.h>

int Sum()
{
    int A,B;
    scanf("%d%d",&A,&B);
    return (A+B);
}
int main()
{
    int a=Sum();
    printf("SOMA = %d\n",a);
    return 0;
}
