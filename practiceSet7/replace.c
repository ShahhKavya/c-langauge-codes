#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main ()
{
char str[300],r,c;

printf("Enter the string ");
fgets(str,sizeof(str),stdin);

printf("Enter the character you want to replace : ");
scanf("%c",&r);

fflush(stdin);

printf("Enter the character you want to add : ");
scanf("%c",&c);

for(int i=0;i<strlen(str);i++)
{

    if(str[i]==r)
    {
str[i]=c;
    }
   

}

printf("New string is %s ",str);



}