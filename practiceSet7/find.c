#include<stdio.h>
#include<string.h>
int main ()
{

    char name[300],c;
    
    int p=0;

    printf("Enter the name of string : ");
    fgets(name,300,stdin);

    printf("Enter the character you want to find :- ");
scanf("%c",&c);


for(int i=0;i<strlen(name);i++)
{
if(name[i]==c)
{
    printf("%c is present ",c);
    p=1;
    
    
}

}

if(p==0)
{
    printf("%c is not present ",c);
}
    

}