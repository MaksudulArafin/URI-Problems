 #include<stdio.h>

 int main()
 {
     double a,b,c,d,e,f; int g,h,i,j,k,l;
     scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f);

     if(a>0) {g=1;
     }
     else
     {
         g=0;
     }
     if(b>0) {h=1;}
     else
     {
         h=0;
     }
     if(c>0) {i=1;}
     else
     {
         i=0;
     }
     if(d>0) {j=1;
     }
     else
     {
         j=0;
     }
     if(e>0) {k=1;}
     else
        {
             k=0;
        }
          if(f>0) {l=1;}
     else {
            l=0;
     }


     printf("%d valores positivos\n",(g+h+i+j+k+l));
     return 0;
 }
