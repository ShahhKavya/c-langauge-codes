#include <stdio.h>
int main ()
{
    
int number[10];
printf("Enter the number  \n ");

for(int i=0;i<=9;i++)
{
    printf("Enter number %d  :  ",i+1);
    scanf("%d",&number[i]);
       
}


for(int i=0;i<10;i++)
{
    
    if(number[i]%2==0)
    printf("%d is Even \n",number[i]);
 
    
    else
    printf("%d is Odd \n ",number[i]);
    
    
    
}

    return 0;
}

