#include<stdio.h>
int main ()
{
    char c;
    printf("Enter your character ");
    scanf("%c",&c);


    if (c>='A' && c<='Z')
    {
        printf("%c is Capital Alphabet",c);
    }

else if (c>='a' && c<='z')
    {
        printf("%c is Small Alphabet",c);
    }


    else if (c>='0' && c<='9')
    {
        printf("%c is Digit",c);
    }

else 
    {
        printf("%c is Special Character ",c);
    }


}
