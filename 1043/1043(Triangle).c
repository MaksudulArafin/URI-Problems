#include<stdio.h>


int main()
{
    float A,B,C,a,b;
    scanf("%f %f %f",&A,&B,&C);
    if(A+B>C && B+C>A && C+A>B)
    {
        a=A+B+C; printf("Perimetro = %.1f\n",a);
    }
    else
    {
        b=C*((A+B)/2); printf("Area = %.1f\n",b);
    }
}
