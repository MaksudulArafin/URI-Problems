#include<stdio.h>

int main()
{
    int x,y,z,j,i,T,PA,PB; //T is for test cases
    double G1,G2;
    scanf("%d",&T);
    for(i=0; i<T ;i++)
    {
        scanf("%d%d%lf%lf",&PA,&PB,&G1,&G2);
        z=0;
        for(j=0; ;j++)
        {
            PA=PA+PA*(G1/100.00);
            PB=PB+PB*(G2/100.00);
            z++;
            if(z>100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
            if(PA > PB)
            {
                printf("%d anos.\n",z);
                break;
            }
        }
    }
    return 0;
}


