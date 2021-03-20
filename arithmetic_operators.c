//Author Name: Pranoy Bhan
//Creation Date: 16 March 2021
//Purpose: Program for arithmetic operators

#include <stdio.h>   //Preprocessor directive to include standard input output header file
int main()
{  //Start of main function body
   
   int num1, num2, add, subtract, multiply;  //variable declaration of integer data type
   float divide;  //variable declaration of float data type
 
   printf("Enter two numbers\n");   //printf function calling to print two numbers
   scanf("%d%d", &num1, &num2);
 
   add = num1 + num2;
   subtract = num1 - num2;
   multiply = num1 * num2;
   divide = num1 / (float)num2;  

   printf("Sum = %d\n", add); //printf function calling to print sum
   printf("Difference = %d\n", subtract); //printf function calling to print difference
   printf("Multiplication = %d\n", multiply);   //printf function calling to print multiplication 
   printf("Division = %.2f\n", divide);   //printf function calling to print division
 
   return 0;   //return statement
}
//end of main function body
