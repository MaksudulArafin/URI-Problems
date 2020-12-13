#include<stdio.h>
float avarage1(float A, float B);

void main()
{
    float A,B,c;
    c=avarage1(A,B);
    printf("MEDIA = %.5f\n",c);
    return 0;
}

float avarage1(float A,float B)
{
    scanf("%f%f",&A,&B);
    return (A*3.5+B*7.5)/(3.5+7.5);
}
