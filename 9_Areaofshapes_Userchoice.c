//Author name: Pranoy Bhan
//Creation Date: 20 March 2021
//Purpose:Program to calculate Area of Circle, Square and Rectangle based on user choice

#include<stdio.h>//preprocessor directive to include standard input output function header file
int main()
{	//main function body starts
	
	float raduisOfCircle, sideOfSquare, legthOfRectangle, breadthOfRectangle;	//variable declaration of float data type
	
	scanf("%f %f %f %f", &raduisOfCircle, &sideOfSquare, &legthOfRectangle, &breadthOfRectangle);	//taking input form user
	
	printf("Area of Circle: %f",((22*raduisOfCircle*raduisOfCircle)/7));	//printf statement for printing area of circle
	
	printf("\nArea of Square: %f",(sideOfSquare*sideOfSquare));	//printf statement for printing area of square
	
	printf("\nArea of Rectangle: %f",(legthOfRectangle*breadthOfRectangle));	//printf statement for printing area of rectangle
	
	return 0;	//return statement
}//main function body ends
