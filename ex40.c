#include <stdio.h>

typedef struct s_profile {
    char    name[20];
    int age;
} profile;

int main()
{
    profile prof_list[10];
    profile *current;

    for (int i = 0; i < 10; i++)
    {
        current = prof_list + i;
        printf("Student %d\n", i + 1);
        
        printf("Name: ");
        scanf(" %s", current->name);

        printf("Age: ");
        scanf("%d", &current->age);
    }

    for (int i = 0; i < 10; i++)
    {
        current = prof_list + i;
        
        if (current->age > 20) {
            printf("%s, %d\n", current->name, current->age);
        }
        
    }
    
}

