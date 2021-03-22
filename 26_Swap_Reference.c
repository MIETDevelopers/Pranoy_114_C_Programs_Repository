//Author: Pranoy Bhan
//Creation Date: 21 March 2021
//Purpose: Program to swap two numbers using call by Reference

#include <stdio.h>	//Preprocessor directive to include input output functions header file
int main () 
{	//start of main body

   //local variable definition
   int p = 30;	//value assignment
   int b = 90;	//value assignment
 
   printf("Before swap, value of p : %d\n", p );	//printf calling to print before swap value of a
   printf("Before swap, value of b : %d\n", b );	//printf calling to print before swap value of b
 
   //calling a function to swap the values
   swap(&p, &b);	//call by reference
 
   printf("After swap, value of p : %d\n", p );	//printf calling to print after swap value of a
   printf("After swap, value of b : %d\n", b );	//printf calling to print after swap value of b
 
   return 0;	//Return statement
}	//end of main body 

void swap(int *x, int *y) //Swap function definition
{	//start of swap function body

   int temp;	//variable declaration

   temp = *x; //save the value of x
   *x = *y;    //put y into x
   *y = temp; //put temp into y
  
   return;	//return to main
}	//end of swap function body
