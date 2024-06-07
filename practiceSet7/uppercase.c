#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main ()
{
    char str[300];
    printf("Enter the value of string : ");
    fgets(str,300,stdin );

    int len=strlen(str);

    for(int i=0;i<len;i++)
    {
if(str[i]>=97 && str[i]<=122)
{
str[i]=str[i]-32;

}

    }

    printf("New uppercase string is %s ",str );
}