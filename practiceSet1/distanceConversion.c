#include<stdio.h>
int main ()
{
    int k,m,f,i,c;

    printf("Enter the distance in kilometer  \n ");
    scanf("%d",&k);

m=k*1000;
f=k*3280.84;
i=k*39370.079;
c=m*100;



printf("Distance in other units are \n METER=%d \n FOOT=%d \n INCHES=%d \n CENTIMETER=%d ",m,f,i,c);

}