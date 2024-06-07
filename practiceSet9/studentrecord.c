#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student_record
{
    char name[300];
    char branch[300];
    int marks;

} record[5];

int main()
{
    printf("Enter the information for 5 students \n ");

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the information of student %d \n ", i + 1);
        printf("Name : \n");
        fgets(record[i].name, 300, stdin);
        fflush(stdin);

        printf("Branch : \n");
        fgets(record[i].branch, 300, stdin);
        fflush(stdin);

        printf("Total marks : \n ");
        scanf("%d", &record[i].marks);
        fflush(stdin);
    }
    printf("Final information is : ");
    for (int i = 0; i < 5; i++)
    {
        printf("Student %d \n", i + 1);

        printf("Name  : %s \n ", record[i].name);
        printf("Branch   : %s \n ", record[i].branch);

        printf("Marks  : %d \n ", record[i].marks);
    }
}