#include<stdio.h>
int main()
{
    num1= float(input("Enter Num1:"));
    num2= float(input("Enter Num2:"));
except ValueError:
    printf("Invalid input. Plase enter numbers only.");
    return
printf("Calculator Menu :");
printf("1. +");
printf("2. -");
printf("3. *");
printf("4. /");
printf("5. %");

int:
    choice = int(input("Choose menu :"));
except ValueError:
    printf("Invalid choice. Please enter a number from 1 to 5.");
    return

result = None 
operator_symbol =""
if choice == 1;
   result = num1+num2
   operator_symbol = "+";
else choice == 2;
   result = num1-num2
   operator_symbol = "-";
else choice == 3;
    result = num1*num2
    operator_symbol = "*";
else choice == 4;
    if num2 == 0;
    printf("Error: Division by zero is not allowed.");
    return
    result = num1/num2
    operator_symbol="/";
else choice == 5;
    if num2 == 0;
       printf("Error: Modulo by zero is not allowed.");
       return
    result = num1 % num2
    operator_symbol = "%";
else
     printf("Invaid menu choice.");
     return
if resultis None:
     printf(f"Ans :{num1} {operator_symbol} {num2} = {result})
calculator()
