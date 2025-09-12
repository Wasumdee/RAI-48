#include<stdio.h>
#define SIZE 10
int main()
{
    int num[SIZE],temp,n;
    for(n=0;n<SIZE;n++)
    {
        printf("Enter num[%d]:",n+1);
        scanf("%d",&num[n]);
    }
    for(n=0; n<SIZE-1;n++)
    {
        if(num[n]>num[n+1])
        {
            temp = num[n+1];
            num[n+1]=num[n];
            num[n]=temp;
        }
    }
    printf("The maximum number = %d",num[SIZE-1]);
    return 0;

}