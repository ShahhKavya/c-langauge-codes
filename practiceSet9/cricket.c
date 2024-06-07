#include <stdio.h>
#include<string.h>
#include<stdlib.h>


struct cricket
{
    char name[300];
    char teamname[300];
    int average;

} cric[5];

int main()
{
    printf("Enter the information of players :  \n ");
for(int i=0;i<5;i++)
{
printf("For player %d \n ",i+1);
printf("Name : \n ");
scanf("%s",&cric[i].name);

fflush(stdin);
printf("Team Name  : \n ");
scanf("%s",&cric[i].teamname);
fflush(stdin);
printf("Average : \n ");
scanf("%d",&cric[i].average);
fflush(stdin);



}

printf("Final Information \n ");
for(int i=0;i<5;i++)
{
printf("For player %d \n ",i+1);
printf("Name : %s \n ",cric[i].name);



printf("Average : %d\n ",cric[i].average);




}

}