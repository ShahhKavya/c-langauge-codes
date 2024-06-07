#include<stdio.h>
 int factorial(int n ){
int facto;

if(n==1 || n==0)
{
    return 1;
}

else{
facto=n*factorial(n-1);
 }


return facto ;
 }
 


 }

 int main ()
 {

    int x;
    printf("Enter the value of number : ");
    scanf("%d",&x );

    int fact=factorial(x);

    printf("Factorial of %d is %d ",x,fact );
 }