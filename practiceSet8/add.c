#include<stdio.h>

int add(int n )
{
int sum=0;
for(int i=1;i<=n;i++)
{
sum=sum+i;
}
return sum ;
}

int main ()
{

    int x;

    printf(" Enter how many first n numbers ypou want to add : ");
    scanf("%d",&x);


    int addition=add(x);
    printf("Sum of first %d naturals number is %d",x,addition );
}