#include<stdio.h>
void first_four();
void secound_two();
void biggest();
double A,B,C,temp;


int main()
{
    scanf("%lf%lf%lf",&A,&B,&C);
    biggest();
    //first_four();
    secound_two();
    return 0;
}

void first_four()
{
    if(A >= B+C)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else if((A*A) == (B*B+C*C))
    {
        printf("TRIANGULO RETANGULO\n");
    }
    else if((A*A) > (B*B+C*C))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if((A*A) < (B*B+C*C))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
}

void secound_two()
{
    if(A == B && B == C)
        printf("TRIANGULO EQUILATERO\n");
    else if(((A==B) || (C==A)) ^ (A==B && B==C))
        printf("TRIANGULO ISOSCELES\n");
    else if(((A==B) || (B==C)) ^ (A==B && B==C))
        printf("TRIANGULO ISOSCELES\n");
}

void biggest()
{
    if(A<B)
    {
        temp = A;
        A=B;
        B=temp;
    }
    if(B<C)
    {
        temp=B;
        B=C;
        C=temp;
    }
    if(A<B)
    {
        temp = A;
        A=B;
        B=temp;
    }
    first_four();
}
