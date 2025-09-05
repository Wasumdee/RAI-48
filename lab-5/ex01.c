#include<stdio.h>
int main()
{
    int values [10] ;
    int r;
    for(r=0;r<10;r++)
    {
         printf("Enter the values %d here:",r+1);
         scanf("%d",&values [r]);
    }
     printf("Values in array are: ");
     for (r=0; r<10;r++)
     {
        printf("%d",values[r]);
        if (r<9)
        {
            printf(",");
        }
     }
     printf("\n");
     return 0;
}