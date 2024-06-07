#include<stdio.h>
int main ()
{
    int m;
    printf("Enter marks in range of 0-100 : ");
    scanf("%d",&m);

    if(m>=0 && m<=100)
{
    
if(m>=80 && m<=100)
{
    printf("Student has obtained disntinction  ");
}


else if (m>=60 && m<=79){
    printf("Student has obtained first class ");
}

else if (m>=40 && m<=59){
    printf("Student has obtained second class ");
}

else{
    printf("Sorry :( \n Student is failed ! ");
}

}

else{
    printf("Enter valid marks ");
}

}