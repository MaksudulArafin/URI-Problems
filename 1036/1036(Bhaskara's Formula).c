#include<stdio.h>
#include<math.h>

int main()
{
    double A,B,C;
    scanf("%lf %lf %lf",&A,&B,&C);
    double a= sqrt((B*B)-4*A*C);
    double b=(-B+a)/(2*A);
    double c=(-B-a)/(2*A);
    if(A>0&&a>0)
    {
        printf("R1 = %.5lf\n",b);
        printf("R2 = %.5lf\n",c);
    }
    else
    {
        printf("Impossivel calcular\n");
    }
    return 0;
}
