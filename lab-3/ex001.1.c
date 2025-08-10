#include<stdio.h>
int main()
{
    float num1,num2;
    printf("Enter number 1:");
    scanf("%f", &num1);
    printf("Enter number 2:");
    scanf("%f", &num2);
    if(num2 !=0) {
       printf("Calculator Menu:\n");
          printf("1. +\n");
          printf("2. -\n");
          printf("3. *\n");
          printf("4. /\n");
          scanf("%e", &num1);
    } if (num1+num2) {
          printf("Choose menu:1\n");
          scanf("%e", &num1);         
    } if (num1+num2){
          printf("Ans:3+6=9");
    }
    return 0;
      
    }
         
       
    
