#include <stdio.h>

int main()
{
int n,sum=0;
printf("Enter the value of number for which you need sum of square of all natural no : \n ");
scanf("%d",&n);

for(int i=1;i<=n;i++)
{
    sum=sum + (i*i);
}
printf("Sum is %d ",sum );

        
    

    return 0;
}

