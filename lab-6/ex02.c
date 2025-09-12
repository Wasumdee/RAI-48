#include<stdio.h>
int main()
{
    struct Student
    {
        char name[100];
        int age;
        float score;
    };
    struct Student s[3];
    int i , maxIndex = 0;
    for( i = 0; i < 3;i++)
    {
        printf("Student %d's name:",i+1);
        scanf(" %[^\n]", s[i].name);
        printf("Student %d's age:", i+1);
        scanf("%d", &s[i].age);
        printf("Student %d's score:", i+1);
        scanf("%f", &s[i].score);
        printf("\n");
        if(s[i].score > s[maxIndex].score)
        {
            maxIndex = i;
        }
    }
    
        printf("The highest score belongs to %s at %.1f scores!\n",s[maxIndex].name, s[maxIndex].score);
    
return 0;
}