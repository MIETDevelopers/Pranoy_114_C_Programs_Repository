//Author: Pranoy Bhan
//Creation Date: 21 March 2021
//Purpose: Program to create Simple Calculator using switch case and function for every operation

#include<stdio.h>	//Preprocessor directive to include standard input output functions header file
int main()
{	//Start of the main body function
    
	char operator;	//Declaring variable of character data type 
    double p, b;	//Declaring variables of double data type
    printf("Enter an operator (+, -, *, /):");	//printf function calling to print an operator
    scanf("%c", &operator);	//scanf function calling for user input
    
	printf("Enter two operands:");	//Printf function calling to print two operands
    scanf("%lf %lf",&p, &b);	//scanf function calling to read user input
    switch(operator)
	{	//Start of Switch case body
        case '+'://Case 1
            printf("%.lf + %.lf = %.lf",p, b, p+b);	//printf function calling to print addition of two numbers
            break;	//Break statement

        case '-':	//Case 2
            printf("%.lf - %.lf = %.lf",p, b, p-b);	//printf function calling to print subtraction of two numbers
            break;	//Break statement

        case '*':	//Case 3
            printf("%.lf * %.lf = %.lf",p, b, p*b);	//printf function calling to print multiplication of two numbers
            break;	//Break statement

        case '/':	//Case 4
            printf("%.lf / %.lf = %.lf",p, b, p/b);	//printf function calling to print division of two numbers
            break;	//Break statement
        default:
            printf("Error!");	//printf function calling to print error!
    }
    return 0;	//Return statement
}	//End of the main function body
