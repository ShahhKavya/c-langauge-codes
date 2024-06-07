#include<stdio.h>

int prime(int x)
{
int count=0;

for(int i=1;i<=x;i++)
{
if(x%i==0)
{
    count=count+1;
}

}

if(count<=2)
{
    return 1;
}
else{
    return 0;
}




}
int main ()
{

    int n;
    printf("Enter the value of integer :");
    scanf("%d",&n);

    int p=prime(n);

    printf("%d",p);

}