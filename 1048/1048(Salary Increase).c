#include<stdio.h>
int money();
double salary, new_salary, money_earned; int in_percentage;

int main()
{
    scanf("%lf", &salary);

    money();
    return 0;
}


int money()
{
    if(0<=salary && salary<=400.00)
    {
        in_percentage = 15;
        money_earned=(salary*(float)in_percentage)/100.00;
        new_salary = salary+money_earned;
        printf("Novo salario: %.2lf\n",new_salary);
        printf("Reajuste ganho: %.2lf\n",money_earned);
        printf("Em percentual: %d %%\n",in_percentage);
    }
    else if(400.01<=salary && salary<=800.00)
    {
        in_percentage = 12;
        money_earned=((salary*(float)in_percentage)/100.00);
        new_salary = salary+money_earned;
        printf("Novo salario: %.2lf\n",new_salary);
        printf("Reajuste ganho: %.2lf\n",money_earned);
        printf("Em percentual: %d %%\n",in_percentage);
    }
    else if(800.01<=salary && salary<=1200.00)
    {
        in_percentage = 10;
        money_earned=((salary*(float)in_percentage)/100.00);
        new_salary = salary+money_earned;
        printf("Novo salario: %.2lf\n",new_salary);
        printf("Reajuste ganho: %.2lf\n",money_earned);
        printf("Em percentual: %d %%\n",in_percentage);
    }
    else if(1200.01<=salary && salary<=2000.00)
    {
        in_percentage = 7;
        money_earned=((salary*(float)in_percentage)/100.00);
        new_salary = salary+money_earned;
        printf("Novo salario: %.2lf\n",new_salary);
        printf("Reajuste ganho: %.2lf\n",money_earned);
        printf("Em percentual: %d %%\n",in_percentage);
    }
    else if(salary>=2000.01)
    {
        in_percentage = 4;
        money_earned=((salary*(float)in_percentage)/100.00);
        new_salary = salary+money_earned;
        printf("Novo salario: %.2lf\n",new_salary);
        printf("Reajuste ganho: %.2lf\n",money_earned);
        printf("Em percentual: %d %%\n",in_percentage);
    }
    return 0;
}

