#include <stdio.h>

int main()
{
float n,sum=0;
printf("Number for which you need sum of reciprocals  : \n ");
scanf("%f",&n);

for(float i=1;i<=n;i++)
{
    sum=sum + (1/i);
}
printf("Sum is %f ",sum );

        return 0;
}

