#include<stdio.h>
int vertebrado();
int invertebrado();
    char A[100],B[100],C[100];
    char a[]="vertebrado";
    char b1[]="ave";
    char b2[]="mamifero";
    char c1[]="carnivoro";
    char c2[]="onivoro";
    char c3[]="onivoro";
    char c4[]="herbivoro";

    char x[]="invertebrado";
    char y1[]="inseto";
    char y2[]="anelideo";
    char z1[]="hematofago";
    char z2[]="herbivoro";
    char z3[]="hematofago";
    char z4[]="onivoro";
int main()
{
    scanf("%s%s%s",&A,&B,&C);
    vertebrado();
    invertebrado();
    return 0;
}

int vertebrado()
{
    if(0==strcmp(A,a))
    {
        if(0==strcmp(B,b1))
        {
            if(0==strcmp(C,c1))
            {
                printf("aguia\n");
            }
            else if(0==strcmp(C,c2))
            {
                printf("pomba\n");
            }
        }
        else if(0==strcmp(B,b2))
        {
            if(0==strcmp(C,c3))
            {
                printf("homem\n");
            }
            else if(0==strcmp(C,c4))
            {
                printf("vaca\n");
            }
        }
    }
    return 0;
}
int invertebrado()
{
    if(0==strcmp(A,x))
    {
        if(0==strcmp(B,y1))
        {
            if(0==strcmp(C,z1))
            {
                printf("pulga\n");
            }
            else if(0==strcmp(C,z2))
            {
                printf("lagarta\n");
            }
        }
        else if(0==strcmp(B,y2))
        {
            if(0==strcmp(C,z3))
            {
                printf("sanguessuga\n");
            }
            else if(0==strcmp(C,z4))
            {
                printf("minhoca\n");
            }
        }
    }
    return 0;
}

