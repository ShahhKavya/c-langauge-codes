#include <stdio.h>

int main() {
   int x,fact=1;
   
   printf("Enter the value of x ");
   scanf("%d",&x);
   
   for(int i=1;i<=x;i++)
   {
       fact=fact*i;
   }
   printf("Factorial is %d ",fact );
    return 0;
}