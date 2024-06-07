#include <stdio.h>
int main ()
{
    
int rollno[20],marks[20];
printf("Enter the marks and roll number of 20 students \n ");

for(int i=0;i<20;i++)
{
    printf("Enter roll no : \n ");
    scanf("%d",&rollno[i]);
    
     printf("Enter marks  : \n");
    scanf("%d",&marks[i]);
    
    
}

printf("Information is as follow \n :- ");


for(int i=0;i<20;i++)
{
    printf(" roll no : %d \t   ",rollno[i]);
 
    
     printf(" marks: %d \t  \n",marks[i]);
    
    
    
}
    return 0;
}

