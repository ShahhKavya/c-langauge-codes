#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str[300], c;

    printf("Enter the string : ");
    fgets(str, 300, stdin);

    fflush(stdin);
    printf("Enter the character you want to delete  : ");
    scanf("%c", &c);

    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        if (str[i] == c)
        {
            for (int j = 1; j < len; j++)

            {

                str[j] = str[j + 1];
            }
        }
    }


    printf("New string is :  %s",str );
}