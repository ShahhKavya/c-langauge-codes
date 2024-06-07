#include <stdio.h>

int main() {

int arr[10],max,min;
printf("Enter the value of numbers :-\n ");
for(int i=0;i<10;i++)
{
    printf("Enter number %d : ",i+1 );
    scanf("%d",&arr[i]);
}

max=arr[0];
min=arr[0];
for(int i=0;i<10;i++)
{
  if(max<arr[i])
  {
      max=arr[i];
  }
  
  if(min>arr[i])
  {
      min=arr[i];
  }
}
printf("Minimum number is %d ",min );
printf("Maximum number is %d ",max );

}