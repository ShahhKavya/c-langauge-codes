#include <stdio.h>
int main ()
{
    
int n;
printf("Enter the value of number ");
scanf("%d",&n);

if(n==0)
{
printf("%d is zero ",n);
}

else if (n>0)
{
    printf("%d is positive ",n);
}


else
{
printf("%d is negative ",n);
}


    return 0;
}

