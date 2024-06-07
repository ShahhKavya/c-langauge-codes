#include<stdio.h>
int main ()
{
    int d,u,t,a;

    printf("Enter the value of initial velocity in m/s\n  ");
    scanf("%d",&u);

printf("Enter the value of acceleration  m/s2 \n  ");
    scanf("%d",&a);

printf("Enter the value of time taken in second \n  ");
    scanf("%d",&t);


d=(u*t)+(a*t*t);

printf("Distance covered is %d \n  ",d);
    


}