#include<stdio.h>

double A,B,C;
int min,temp,i,j;


double main()
{
    scanf("%lf%lf%lf",&A,&B,&C);
    double ar[3]={A,B,C};

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
            temp= ar[i];
            ar[i]=ar[min];
            ar[min]=temp;
        }
    }
    for(i=0; i<3; i++)
    {
        printf("%lf\n",ar[i]);
    }

    return 0;
}


