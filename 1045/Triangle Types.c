#include<stdio.h>


void swap(double *x , double *y)
{
    double temp=*x;
    *x=*y;
    *y=temp;
}

void main()
{
    double A,B,C;
    scanf("%lf%lf%lf",&A,&B,&C);
    double ar[3]={A,B,C};
    int min,i,j;


    for( i=0; i<2; i++)
    {
        min=i;
        for( j=i+1; j<3; j++)
        {
            if(ar[min]<ar[j])
            {
               min=j;
            }
        }
        if(min!=i)
        {
            swap(&ar[i],&ar[min]);
        }
    }

    if(ar[0]>=ar[1]+ar[2])
    {

        if((ar[0]==ar[1])&&(ar[1]==ar[2])&&(ar[2]==ar[0]))
        {
            printf("NAO FORMA TRIANGULO\n");
            printf("TRIANGULO EQUILATERO\n");
        }
        else if((ar[0]==ar[1])||(ar[1]==ar[2])||(ar[2]==ar[0]))
        {
            printf("NAO FORMA TRIANGULO\n");
            printf("TRIANGULO ISOSCELES\n");

        }
        else
        {
            printf("NAO FORMA TRIANGULO\n");
        }
    }
    else if((ar[0]*ar[0])==((ar[1]*ar[1])+(ar[2]*ar[2])))
    {

        if((ar[0]==ar[1])&&(ar[1]==ar[2])&&(ar[2]==ar[0]))
        {
            printf("TRIANGULO RETANGULO\n");
            printf("TRIANGULO EQUILATERO\n");
        }
        else if((ar[0]==ar[1])||(ar[1]==ar[2])||(ar[2]==ar[0]))
        {
            printf("TRIANGULO RETANGULO\n");
            printf("TRIANGULO ISOSCELES\n");
        }
        else
        {
            printf("TRIANGULO RETANGULO\n");
        }
    }
    else if((ar[0]*ar[0])>((ar[1]*ar[1])+(ar[2]*ar[2])))
    {
        if((ar[0]==ar[1])&&(ar[1]==ar[2])&&(ar[2]==ar[0]))
        {
            printf("TRIANGULO OBTUSANGULO\n");
            printf("TRIANGULO EQUILATERO\n");
        }
        else if((ar[0]==ar[1])||(ar[1]==ar[2])||(ar[2]==ar[0]))
        {
            printf("TRIANGULO OBTUSANGULO\n");
            printf("TRIANGULO ISOSCELES\n");
        }
        else
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
    }
    else if((ar[0]*ar[0])<((ar[1]*ar[1])+(ar[2]*ar[2])))
    {
        if((ar[0]==ar[1])&&(ar[1]==ar[2])&&(ar[2]==ar[0]))
        {
            printf("TRIANGULO ACUTANGULO\n");
            printf("TRIANGULO EQUILATERO\n");
        }
        else if((ar[0]==ar[1])||(ar[1]==ar[2])||(ar[2]==ar[0]))
        {
            printf("TRIANGULO ACUTANGULO\n");
            printf("TRIANGULO ISOSCELES\n");
        }
        else
        {
            printf("TRIANGULO ACUTANGULO\n");
        }
    }

    return 0;
}


