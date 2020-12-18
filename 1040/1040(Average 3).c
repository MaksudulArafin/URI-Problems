#include<stdio.h>
int first();

int main()
{
    first();
    return 0;
}

int first()
{
    float N1,N2,N3,N4,N5,N;
    scanf("%f%f%f%f",&N1,&N2,&N3,&N4);
    float media=(N1*2+N2*3+N3*4+N4)/10;
    printf("Media: %.1f\n",media);
    if(media>=7.0)
        printf("Aluno aprovado.\n");
    else if(media<5.0)
        printf("Aluno reprovado.\n");
    else
    {
        printf("Aluno em exame.\n");

    scanf("%f",&N5);
    printf("Nota do exame: %.1f\n",N5);
    N=(media+N5)/2;
    if(N>=5.0)
        printf("Aluno aprovado.\n");
    else if(N<=4.9)
        {
        printf("Aluno reprovado.\n");
        }
    printf("Media final: %.1f\n",N);
    }
    return 0;
}
