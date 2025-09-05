#include<stdio.h>
int main()
{
    int marks[5];
    int totalMarks = 0;
    int highestMarks = 0;
    for(int i =0; i < 5; i++)
    {
        printf("Enter the marks of student %d:", i + 1);
        scanf("%d", &marks[i]);
        totalMarks+= marks[i];

        if(marks[i]>highestMarks)
        {
            highestMarks =marks[i];
        }
    }
    printf("Total Marks : %d\n", totalMarks);
    printf("Highest Marks : %d\n", highestMarks);
    return 0;
}