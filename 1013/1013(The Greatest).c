#include<stdio.h>
#include<math.h>
int greatest1(int MaiorAB);
int greatest2(int MaiorBC);

int main()
{
    int MaiorAB,MaiorBC;
    MaiorAB=greatest1(MaiorAB);
    MaiorBC=greatest2(MaiorBC);
    if(MaiorAB>MaiorBC)
        printf("%d eh o maior\n",MaiorAB);
    else
        printf("%d eh o maior\n",MaiorBC);

    return 0;
}
int greatest1(int MaiorAB)
{
    int a,b;
    scanf("%d%d",&a,&b);
    MaiorAB = (a+b+abs(a-b))/2;
    return MaiorAB;

}
int greatest2(int MaiorBC)
{
    int b,c;
    scanf("%d",&c);
    MaiorBC = (b+c+ abs(b-c))/2;
    return MaiorBC;
}

