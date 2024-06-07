#include <stdio.h>

int main() {

int weight[5],height[5],count=0;

for(int i=0;i<5;i++)
{
   
        printf("Enter height for student %d  :\n  ",i+1);
      
        
        scanf("%d",&height[i]);
        
        printf("Enter weight for student %d  :\n  ",i+1);
      
        
        scanf("%d",&weight[i]);
    
}


for(int i=0;i<5;i++)
{
    
    if(weight[i]<50 && height[i]>170)
    {
       count=count+1; 
    }

    
}
printf("Persons are %d ",count);








    return 0;

}