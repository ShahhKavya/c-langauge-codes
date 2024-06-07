#include<stdio.h>
int main()
{

    int n,sum=0;
    float avg;

    printf("Enter how many number you want to add : \n ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the number : \n ");
    for(int i=0;i<n;i++)
    {
printf("Enter number %d ",i+1);
scanf("%d",&arr[i]);
printf("\n ");
    }

 for(int i=0;i<n;i++)
    {
sum=sum+arr[i];
    }
avg=sum/n;
printf("Sum of numbers is \n %d ",sum);
printf("Average of numbers is %f ",avg );


    return 0 ;
}