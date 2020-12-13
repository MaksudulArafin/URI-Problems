#include<stdio.h>
float salary(int hours,int number, float salary_per_hour);


int main()
{
    int number,hours; float salary_per_hour,a;
    a=salary(hours,number, salary_per_hour);
    return 0;
}

float salary(int hours,int number, float salary_per_hour)
{
    scanf(" %d",&number);
    scanf("%d %f",&hours,&salary_per_hour);
    printf("NUMBER = %d\n",number);
    printf("SALARY = U$ %.2f\n",(hours*salary_per_hour));
    return 0;
}
