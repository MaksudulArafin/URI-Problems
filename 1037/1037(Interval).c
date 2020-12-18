#include <stdio.h>

int main()
{
    float A;
    scanf("%f",&A);
    if (0<=A&& A<=25.0000)
    {
        printf("Intervalo [0,25]\n");
    }
    else if(25.00001<=A&&A<=50.0000000)
    {
        printf("Intervalo (25,50]\n");
    }
    else if(50.0000001<=A&&A<=75.0000001)
    {
        printf("Intervalo (50,75]\n");
    }
    else if(75.0000001<=A&&A<=100.0000000)
    {
        printf("Intervalo (75,100]\n");
    }
    else
    {
        printf("Fora de intervalo\n");
    }
    return 0;
}
