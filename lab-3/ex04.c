#include<stdio.h>
int main()
{
    char name[50];
    float cal, phy, sci;
    float average;
    char grade;
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your Calculus score:");
    scanf("%f", &cal);
    printf("Enter your Physic score:");
    scanf("%f", &sci);
    average=(cal+phy+sci)/3.0;
    if (average>= 80)
        grade='A';
    else if (average >= 70)
        grade='B';
    else if (average>=60)
        grade='C';
    else if(average>=50)
        grade='D';
    else
       grade='F';
    printf("%s, your average is%.2f. You not grade %d.\n",name, average, grade);
    return 0;
}

