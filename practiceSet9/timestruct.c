#include<stdio.h>

struct time_struct{

int hour;
int minute ;
int second ;


}time;

int main (){

printf("Enter the hour ");
scanf("%d",&time.hour);
printf("Enter the minute ");
scanf("%d",&time.minute);
printf("Enter the second ");
scanf("%d",&time.second);

printf("Time : %d:%d:%d",time.hour,time.minute,time.second );



}