#include<stdio.h>
double salary_with_bonus();


int main()
{
    salary_with_bonus();

    return 0;
}

double salary_with_bonus()
{
    char seller_name;
    double salary,total_value_sold, total_salary,bonus;
    scanf("%s\n",&seller_name);
    scanf("%lf %lf",&salary,&total_value_sold);
    bonus=total_value_sold*0.15;
    total_salary=salary+bonus;
    printf("TOTAL = R$ %.2lf\n",total_salary);
    return 0;

}
