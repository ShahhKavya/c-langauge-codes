#include <stdio.h>

int main ()
{
    
    int n,temp;
   
    printf("Enter how many number you want to enter : \n");
    scanf("%d",&n);
int arr[n];
printf("Enter the number  \n ");

for(int i=0;i<n;i++)
{
    printf("Enter number %d    :  \n",i+1);
    scanf("%d",&arr[i]);
}
printf("Unsorted array is : \n ");
for(int i=0;i<n;i++)
{
    printf("%d ",arr[i]);
    
}
printf("\n");
for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
        if(arr[i]>arr[j])
        {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        }
    }
}

printf("Sorted array is : \n ");
for(int i=0;i<n;i++)
{
    printf("%d ",arr[i]);
    
}

return 0;
}

