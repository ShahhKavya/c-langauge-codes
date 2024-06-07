#include<stdio.h>
int main ()
{


    int a,h,b ;

    printf("Enter the value of height of triangle : ");
    scanf("%d",&h);

printf("Enter the value of base of triangle : ");
    scanf("%d",&b);


// mistake here i have take int a again 
a=h*b*0.5;

printf("Area of triangle is %.2f",(float)a);



}