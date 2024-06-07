#include <stdio.h>
#include<math.h>
int main()
{
float x,sum=0,fact=1,power;
printf("Value for x  for which you need sum of speical series   : \n ");
scanf("%f",&x);
for(int i=1;i<=10;i++)
{
    fact=fact*i;
    power=pow(x,i);
    if(i%2==0)
    {
        sum=sum +(power/fact);
    }
else{
     sum= ( (sum) +(power/fact) )* (-1);
}

}
printf("Sum is %f ",sum );

    return 0;
}

