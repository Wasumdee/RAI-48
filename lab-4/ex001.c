#include<stdio.h>
int main()
{
    int sum= 0;
    int i, num;
    float average;
    for (i = 1 ; i <=10 ; i++)
    {
    printf("%d.Enter the number:",i);
    scanf("%d", &num);
    sum += num;
    }
    average = sum / 10.0;
    printf("\ntotal sum is %d\n",sum);
    printf("Aveerage is %.2f\n", average);
    return 0 ;
}