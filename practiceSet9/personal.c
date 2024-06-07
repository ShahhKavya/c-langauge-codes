#include<stdio.h>

struct personal{
char name[300];
char date[20];
int salary;


}per[5];

int main ()
{


for(int i=0;i<5;i++)
{

    printf("Enter the name of person %d  ",i+1 );
    scanf("%s",&per[i].name);

    printf("Enter the joining date of person %d  ",i+1);
    scanf("%s",&per[i].date);

printf("Enter the salary of person %d  ",i+1);
    scanf("%d",&per[i].salary);
}

for(int i=0 ;i<5;i++)
{
printf(" person %d \n",i+1);
printf("Name :- %s \n",per[i].name);
printf("Joining date :- %s \n",per[i].date);
printf("Salary  :- %d \n",per[i].salary);




}

    
}