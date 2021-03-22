//Author Name: Pranoy Bhan
//Creation Date: 21 March 2021
//Purpose: To calculate sum of numbers

#include<stdio.h>	//Preprocessor directive to include standard input output header file
 
int main() 
{	//start of main function body
   int a, b, sum;	//variable declaration of integer data type
 
   printf("\nEnter two no: ");	//printf function calling to print two numbers
   scanf("%d %d", &a, &b);	//taking input from user 
 
   sum = a + b;	//sum formula
 
   printf("Sum : %d", sum);	//printing sum
 
   return(0);	//return statement
}//end of main function body
