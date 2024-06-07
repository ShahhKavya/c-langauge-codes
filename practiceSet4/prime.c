#include <stdio.h>

int main()
{
int n,count=0;
 
printf("Enter the value for number greater than 0 and other than 1 and 0 :");
scanf("%d",&n );


if(n==1 )
    {
        printf("1 is nor prime nor composite ");
    }
    
    else if(n==0)
    {
        printf("0 is nor prime nor composite ");
    }



else 
{
    for(int i=1;i<=n;i++)
{
    if(n%i==0)
    {
        count=count+1;
    }
    
}

     if(count<=2){
        printf("%d is prime ",n);
    }
    else{
        printf("%d is composite ",n);
    }

    
}
        
    return 0;
}

