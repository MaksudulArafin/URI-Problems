#include<stdio.h>
#include<math.h>

int main()
{
    double R, pi=3.14159,volume;
    scanf("%lf",&R);
    volume=(4.0/3)*pi*pow(R,3);
    printf("volume = %.3lf\n",volume);
    return 0;
}
