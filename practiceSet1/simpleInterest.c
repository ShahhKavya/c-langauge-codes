#include<stdio.h>
int main ()
{
    int i,p,n,r;

    printf("Enter the value of principal amount : ");
    scanf("%d",&p);

printf("Enter the value of rate of interest  :   ");
    scanf("%d",&r);


    printf("Enter the value of number of years : ");
    scanf("%d",&n);


    i=(p*n*r)/100;


    printf("Simple Interest earned is %.2f",(float)i);
    




}