#include<stdio.h>
int main ()
{
    int n,l;
    printf("Enter the integer : ");
    scanf("%d",&n);

    l=n%10;


    if(l%2==0)
    {
        printf("Last digit of %d is Even ",n);

    }

    else{

printf("Last digit of %d is odd",n);
    }


}