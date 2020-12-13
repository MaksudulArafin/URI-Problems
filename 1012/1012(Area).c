#include<stdio.h>
#include<math.h>
double triangle(double A, double C);
double circle(double C);
double trapezium(double A, double B, double c);
double square(double B);
double rectangle(double A, double B);

int main(double A, double B, double C)
{
    double a,b,c,d,e;
    scanf("%lf %lf %lf",&A,&B,&C);
    a=triangle(A,C);
    b=circle(C);
    c=trapezium(A,B,C);
    d=square(B);
    e=rectangle(A,B);
    printf("TRIANGULO: %.3lf\n",a);
    printf("CIRCULO: %.3lf\n",b);
    printf("TRAPEZIO: %.3lf\n",c);
    printf("QUADRADO: %.3lf\n",d);
    printf("RETANGULO: %.3lf\n",e);

    return 0;
}

double triangle(double A, double C)
{
    double a=.5*A*C;
    return a;
}
double circle(double C)
{
    double b;
    b=3.14159*C*C;
    return b;
}
double trapezium(double A, double B, double C)
{
    double c;
    c=.5*C*(A+B);
    return c;
}
double square(double B)
{
    double d;
    d=B*B;
    return d;
}
double rectangle(double A, double B)
{
    double e;
    e=A*B;
    return e;
}
