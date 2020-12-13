#include<stdio.h>
int n,n1,n2,n3,n4;
int time();
int main()
{
    int x;
    scanf("%d",&n);
    x=time();
    return 0;
}

int time()
{
   if(n>=3600)
{
   n1=n/3600;
   n2=n%3600;
   n3=n2/60;
   n4=n2%60;
   printf("%d:%d:%d\n",n1,n3,n4);
}
else
{
    n1=n/60;
    n2=n%60;
    printf("0:%d:%d\n",n1,n2);
}
  return 0;
}
