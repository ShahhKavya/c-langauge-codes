#include <stdio.h>
int main ()
{
    
    int n,max;
    printf("Enter how many elements you want to enter : \n");
    scanf("%d",&n);
int num[n];
printf("Enter the number  \n ");

for(int i=0;i<n;i++)
{
    printf("Enter number %d    :  \n",i+1);
    scanf("%d",&num[i]);
    
    
    
    
}
max=num[0];



for(int i=0;i<n;i++)
{
    if(max<num[i])
    {
        max=num[i];
    }
    
    
}

printf("Maximum element is  %d ",max);
return 0;
}

