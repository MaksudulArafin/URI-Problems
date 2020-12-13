#include<stdio.h>
float average2(float A, float B, float C);

int main(float A, float B,float C,float x)
{

    scanf("%f%f%f",&A,&B,&C);
    x=average2(A,B,C);
    printf("MEDIA = %.1f\n",x);
    return 0;
}

float average2(float A, float B, float C)
{
    float x =(A*2+B*3+C*5)/(2+3+5);
    return x;
}

