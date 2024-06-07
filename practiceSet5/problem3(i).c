#include <stdio.h>

int main() {
int n,a=65;
 
printf("Enter the value for no of rows :");
scanf("%d",&n );


for(int i=n;i>=1;i--)
{
    for(int j=1;j<=i ; j++)
    {
      printf("%c",(char)a);
    }
    a++;
        
    printf("\n");
}
    return 0;
}

