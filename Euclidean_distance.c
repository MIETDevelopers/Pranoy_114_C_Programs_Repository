//Author Name: Pranoy Bhan
//Creation Date: 16 March 2021
//Purpose: To calculate euclidean distance

#include <stdio.h>	//Preprocessor directive to include standard input output header file
#include <math.h>	//Preprocessor directive to include math header file
int main() 
{	//start of main function body
	
	float x1, y1, x2, y2, d;	//variable declaration
	
	printf("Input x1: ");	//printf function calling to print x1
	scanf("%f", &x1);	//taking input from user
	
	printf("Input y1: ");	//printf function calling to print y1
	scanf("%f", &y1);	//taking input from user
    
	printf("Input x2: ");	//printf function calling to print x2
	scanf("%f", &x2);	//taking input from user
	
	printf("Input y2: ");	//printf function calling to print y2
	scanf("%f", &y2);	//taking input from user
	d = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));	//distance formula
	
	printf("Distance between the said points: %f", sqrt(d));	//printf function calling to print distance 
	
	return 0;	//return statement
}
//End of main function body
