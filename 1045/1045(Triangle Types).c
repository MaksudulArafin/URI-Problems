#include<stdio.h>
void bubble();
void swap(double* xp, double* yp);
int part();

int i,j,n=3;


int main()
{
    bubble();
    part();
    return 0;
}
void swap(double *xp, double *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void bubble()
{
    double ar[n];
    for(i=0; i<n; i++)
    {
        scanf("%lf",&ar[i]);
    }

    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(ar[j]<ar[j+1])
            {
            swap(&ar[j],&ar[j+1]);
            }
        }
    }
}

int part()
{
    double ar[n];
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

}


