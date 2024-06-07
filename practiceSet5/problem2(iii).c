#include <stdio.h>
//refer 

int main() {
int n;
 
printf("Enter the value for no of rows :");
scanf("%d",&n );


for(int i=n;i>=1;i--)
{
    for(int j=1 ;j<=i ; j++)
    {
      
           printf("%d",i) ;
    }
        
    printf("\n");
}
    return 0;
}
