#include <stdio.h>

int main() {
int x,ld,fd;
printf("Enter the value of integer : ");
scanf("%d",&x);

ld=x%10;

for(int i=1;x>0;i++)
{
    x=x/10;
    
    if(x<=9 && x>0)
    {
        fd=x;
    }
    
}

printf("Sum of first and last digit  is %d ",ld+fd);
}