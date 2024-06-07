#include<stdio.h>
int main ()
{
int a,b,c;

printf("Enter the value of a :");
scanf("%d",&a);


printf("Enter the value of b :");
scanf("%d",&b);

printf("Enter the value of c :");
scanf("%d",&c);


if(a>b)
{
    if(a>c)
    printf("%d is greatest among %d and %d",a,b,c);

    else
    printf("%d is greatest among %d and %d ",c,a,b);
}

else if (b>a)
{
    if(b>c)
    printf("%d is greatest among %d and %d",b,a,c);

    else
    printf("%d is greatest among %d and %d ",c,a,b);
}


else{
    printf("Enter distinct number ");
}


}