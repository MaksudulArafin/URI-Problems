#include<stdio.h>
int difference();

int main()
{
    difference();
    return 0;
}

int difference()
{
    int A,B,C,D;
    scanf("%d%d%d%d",&A,&B,&C,&D);
    printf("DIFERENCA = %d\n",(A*B-C*D));
    return 0;
}
