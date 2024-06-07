#include <stdio.h>
int main ()
{
   
    float basic,d,h,m=300,p,g,n;

    

    printf("BASIC :  ");
    scanf("%f",&basic);

d=0.1*basic;
h=0.075*basic;
p=0.125*basic;
g=basic+d+h+m;
n=g-p;


printf("PAY SLIP : \n ");
printf("Da=%f \n",d);
printf("Hra=%f \n ",h);
printf("Ma=%f \n ",m);
printf("Pf=%f \n ",p);
printf("Gross=%f \n ",g);
printf("Nt=%f \n ",n);


}