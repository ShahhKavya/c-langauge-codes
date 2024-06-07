#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
int main ()
{
char str[300];

printf("Enter the value of string : ");
fgets(str,300,stdin);

int len=strlen(str);

for(int i=0;i<len;i++)
{
int temp ;
temp=str[i];
str[i]=str[len-1];
str[len-1]=temp ;

len -- ;

    
}
printf("New string is %s ",str );
}