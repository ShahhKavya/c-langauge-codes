#include <stdio.h>
#include<math.h>
int main ()
{
    int n;
   
    float sum=0,avg,gm=1,g,hm=0,h;
    printf("Enter how many elements you want to enter : \n");
    scanf("%d",&n);
 float num[n];
printf("Enter the number  \n ");

for(int i=0;i<n;i++)
{
    printf("Enter number %d    :  \n",i+1);
    scanf("%f",&num[i]);
}


for(int i=0;i<n;i++)
{
    sum=sum+num[i];
    gm=gm*num[i];
    hm=hm+1/num[i];
    
}
avg=sum/n;
g=pow(gm,1.0/n);
h=n/hm;


printf("AM is %f \n GM is %f \n HM is %f \n ",avg,g,h);


return 0;
}

