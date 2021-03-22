//Author: Pranoy Bhan
//Creation Date: 21 March 2021
//Purpose:To demonstrate the use of various string operations

#include <stdio.h>	//Preprocessor directive to include standard input output functions header file
#include <string.h>	//Preprocessor directive to include string header file 

int main () 
{	//start of main function body
   char str[20];	//declaring array namely str with character data type

   //copying the string "Hero" to the str and displaying the return value of strcpy()
    
   printf("Return value of function: %s\n", strcpy(str, "Hero"));	//using strcpy function
   printf("String str1: %s\n", str);	//printf calling to print str1

   return 0;	//Return statement
}	//main body ends
