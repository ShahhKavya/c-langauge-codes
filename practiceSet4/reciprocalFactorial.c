#include <stdio.h>

int main()
{
float n,sum=0,fact=1;
printf("Number for which you need sum of reciprocals of factorial  : \n ");
scanf("%f",&n);

for(float i=1;i<=n;i++)
{
    fact=i*fact;
    
    sum=sum + (1/fact);
}
printf("Sum is %f ",sum );

        
    

    return 0;
}