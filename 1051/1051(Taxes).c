#include<stdio.h>
void salary();


int main()
{
    double r;
    scanf("%lf",&r);
    salary(r);
    return 0;
}

void salary(double r)
{
    double x;
    if(0.00>=r<=2000.00)
    {
        printf("Isento\n");
    }
    else if(2000.01>=r<=3000.00)
    {
        x=r+(r*8/100)
    }
}
