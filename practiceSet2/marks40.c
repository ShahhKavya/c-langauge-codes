#include<stdio.h>
int main ()

{

    int m;
    printf("Enter marks in range of 0-100 : ");
    scanf("%d",&m);

    if(m>0 && m<=100)
{
    
if(m>=40)
{
    printf("Student is passed ");
}


else{
    printf("Student is failed : ");
}

}

else{
    printf("Enter valid marks ");
}
}