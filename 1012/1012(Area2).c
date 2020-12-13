#include<stdio.h>

int main(float A, float B, float C)
{
    float a,b,c,d,e,pi=3.14156;
    scanf("%f %f %f",&A,&B,&C);
    a=.5*A*C;
    b=pi*C*C;
    c=.5*C*(A+B);
    d=B*B;
    e=A*B;
    printf("TRIANGULO: %.3f\n",a);
    printf("CIRCULO: %.3f\n",b);
    printf("TRAPEZIO: %.3f\n",c);
    printf("QUADRADO: %.3f\n",d);
    printf("RECTANGULO: %.3f\n",e);

    return 0;
}

