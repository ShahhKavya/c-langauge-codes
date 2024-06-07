#include <stdio.h>

int main() {
int x,ld,r=0;
printf("Enter the value of integer : ");
scanf("%d",&x);

for(int i=1;x>0;i++)
{
    
    ld=x%10;
    r=r+ld;
   r=r*10;
    x=x/10;
    
}
r=r/10;
printf("Reversed number is %d ",r);
}