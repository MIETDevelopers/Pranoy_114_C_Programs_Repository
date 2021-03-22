//Author: Pranoy Bhan
//Creation Date: 21 March 2021
//Purpose: Program to swap two numbers using call by value

#include <stdio.h>	//Preprocessor directive to include standard input output functions header file

void swap(int num, int num1)	//Swap function definition
{
    int temp;	//variable declaration

    printf("In Function values before swapping: %d %d\n", num, num1);	//printf function calling to print Function values before swapping

    temp = num;	//value assignment 
    num = num1;	//value assignment
    num1 = temp;	//value assignment

    printf("In Function values after swapping: %d %d\n\n", num, num1);	//printf function calling to print Function values after swapping
}

//main() function definition
int main()
{
    int n1, n2;	// variable declaration

    
    printf("Enter two numbers: ");	//printf function calling to print enter two numbers
    scanf("%d%d", &n1, &n2);	// Input two integers from user

   
    printf("In Main values before swapping: %d %d\n\n", n1, n2); //Print value of n1 and n2 in before swapping

    //Function call to swap n1 and n2
    swap(n1, n2);
    printf("In Main values after swapping: %d %d", n1, n2);	//printf calling to print after swamp n1 n2

    return 0;	//Return Statement
}	//main body ends
