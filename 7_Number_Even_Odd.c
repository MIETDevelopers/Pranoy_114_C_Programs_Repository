//Author Name: Pranoy Bhan
//Creation Date: 16 March 2021
//Purpose: To check if the number is even or odd

#include <stdio.h>  //Preprocessor directive to include standard input output header file
int main() 
{   //Start of main function body
    
    int num;    //variable declaration
    printf("Enter an integer: ");   //printf function calling to print an integer
    scanf("%d", &num);

    if(num % 2 == 0)	// true if num is divisible by 2
        printf("%d is even.", num); //print even
    else
        printf("%d is odd.", num);  //print odd
    
    return 0;   //return statement
}
//end of main function body
