#include <stdio.h>

int main() {
  
  int x,a=0,b=1,sum;
  printf("Enter the value of fibbonacci series you want : ");
  scanf("%d",&x);
  
  printf("Fibbonaaci number are :- ");
  for(int i=1;i<=x;i++)
  
  {
      sum=a+b;
      a=b;
      b=sum;
        printf("\n %d \n ",sum);
      
      
      
  }

  
}