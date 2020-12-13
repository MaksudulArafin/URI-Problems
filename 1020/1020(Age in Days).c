#include<stdio.h>
int n,n1,n2,n3,n4;
int age();
int main()
{
    int x;
    scanf("%d",&n);
    x=age();
    return 0;
}

int age()
{
   if(n>=365)
{
   n1=n/365;
   n2=n%365;
   n3=n2/30;
   n4=n2%30;
   printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",n1,n3,n4);
}
else
{
    n1=n/30;
    n2=n%30;
    printf("0 ano(s)\n%d mes(es)\n%d dia(s)\n",n1,n2);
}
  return 0;
}
