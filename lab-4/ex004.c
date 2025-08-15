#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number :7");
    printf("\nMultiplication table\n");
    for (num=1; num<=12; num++)
    {
        printf("%4d*%-2d=%-3d\n", 7, num,7*num);
    }
    return 0;
}