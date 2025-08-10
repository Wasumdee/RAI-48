#include<stdio.h>
int main()
{
    float num1,num2;
    printf("Enter number 1:");
    scanf("%f", &num1);
    printf("Enter number 2:");
    scanf("%f", &num2);
   char d;
       printf("Calculator Menu:\n");
          printf("1. +\n");
          printf("2. -\n");
          printf("3. *\n");
          printf("4. /\n"); 
          printf("5. %% \n ");
          printf("Choose Menu:");
          scanf("%hhd", &d);
    if ( d == 1){
        printf("Ans: %.1f+%.1f=%.1f", num1, num2, num1+num2);
    } else if ( d == 2){
        printf("Ans: %.1f-%.1f=%.1f", num1, num2, num1-num2);
    } else if ( d == 3){
        printf("Ans: %.1f*%.1f=%.1f", num1, num2, num1*num2);
    } else if ( d == 4){
        printf("Ans: %.1f/%.1f=%.1f", num1, num2, num1/num2);
    }  else{
        printf("Error divided by zero\n");
    }
    return 0;
 }
         
       
    
