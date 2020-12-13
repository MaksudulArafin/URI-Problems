#include<stdio.h>
float simple_calculate1();
float simple_calculate2();


int main()
{
    float x,y,simple_calculate;
    x=simple_calculate1();
    y=simple_calculate2();
    simple_calculate=x+y;
    printf("VALOR A PAGAR: R$ %.2f\n",simple_calculate);
    return 0;
}

float simple_calculate1()
{
    int code_of_product1,units_of_product1;
    float prize_for_one_unit_of_product1,x;
    scanf("%d %d %f",&code_of_product1,&units_of_product1,&prize_for_one_unit_of_product1);
    x=units_of_product1*prize_for_one_unit_of_product1;
    return x;
}
float simple_calculate2()
{
    int code_of_product2,units_of_product2;
    float prize_for_one_unit_of_product2,y;
    scanf("%d %d %f",&code_of_product2,&units_of_product2,&prize_for_one_unit_of_product2);
    y=units_of_product2*prize_for_one_unit_of_product2;
    return y;
}
