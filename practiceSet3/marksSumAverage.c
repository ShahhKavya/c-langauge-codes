#include <stdio.h>

int main() {

int arr[5][3],sum=0,avg=0;

for(int i=0;i<5;i++)
{
    for(int j=0;j<3;j++)
    {
        printf("Enter mark for student %d for subject %d :\n  ",i+1,j+1);
        scanf("%d",&arr[i][j]);
    }
}

for(int i=0;i<5;i++)
{printf("Avearge marks & Total marks  for student %d \n:  ",i+1);
    for(int j=0;j<3;j++)
    {
        
      sum=sum+arr[i][j];
    }
    avg=sum/3;
    
    printf("Total  marks %d \n ",sum );
    printf("Average marks %d \n ",avg );
    
}

return 0;

}