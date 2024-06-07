#include<stdio.h>
int main ()
{
    int f,c;


    printf("Enter the temperature in Centigrade : ");
    scanf("%d",&c);

    f=(9*c/5) + 32 ;

    printf("Temperature in Fahrenheit is %d ",f);
}