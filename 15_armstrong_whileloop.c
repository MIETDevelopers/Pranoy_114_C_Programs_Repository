//Author name: Pranoy Bhan
//Creation date: 21 March 2021
//Purpose: Check number is armstrong or not using while loop

#include <stdio.h>	//Preprocessor directive to include standard input output function header file
int main()
{	//Start of main function body
  int num, originalNum, remainder, sum = 0;	//Declaring variables of integer data type
  printf("Enter a three-digit integer: \n");	//Printf function calling to print a three digit integer
  scanf("%d", &num);	//Scanf function calling to take input from user
  originalNum = num;

  //start of while loop
  while (originalNum != 0) 
  {
     //Formula
     // remainder contains the last digit
    remainder = originalNum % 10;
        
    sum+= remainder * remainder * remainder;
        
    // removing last digit from the orignal number
    originalNum /= 10;
  }

  if (sum == num)	//if statement
      printf("%d is an Armstrong number.", num);	//printf function calling to print an armstrong number
  else	//else statement
      printf("%d is not an Armstrong number.", num);	//printf function calling to print not an armstrong number

  return 0;	//return statement
}	//End of main function body
