#include <stdio.h>	//Preprocessor directive to include standard input output header file
#include <conio.h>	//Preprocessor directive to include console input output header file
int main()
{	//Start of main function body
	
	float side, area_Square, area_Circle, radius,length, breadth, area_Rectangle, perimeter_Rectangle, circumference_Circle, perimeter_Square;	//variable declaration
  
  	printf("Enter length of side of square\n");	//printf function calling to print length of side of square
  	scanf("%f", &side);	//taking input from user
  	area_Square=side*side;	//formula for area of square
  	perimeter_Square=4*side;	//formula for perimeter of square
	
	printf("\nEnter the radius of Circle : ");	//printf function calling to print radius of circle
	scanf("%f", &radius);	//taking input from user
	area_Circle=3.14*radius*radius;	//formula for area of circle
	circumfernce_Circle=2*(3.14*radius);	//formula for circumference of circle
	
  	printf("\nEnter the Length of Rectangle : ");	//printf function calling to print length of rectangle
  	scanf("%f", &length);	//taking input from user
  	printf("\nEnter the Breadth of Rectangle : ");	//printf function calling to print breadth of rectangle
  	scanf("%f", &breadth);	//taking input from user
  	area_Rectangle=length*breadth;	//formula for area of rectangle
  	perimeter_Rectangle=2*(length+breadth);	//formula for perimeter of rectangle
  
  	printf("Area of square : %f\n", area_Square);	//printf function calling to print area of square
  	printf("perimeter of Square :%f\n",perimeter_Square);	//printf function calling to print perimeter of square
	
  	printf("\n Area of Circle : %f", area_Circle);	//printf function calling to print area of circle
	printf("\nCircumference of circle is : %f",circumference);	//printf function calling to print circumference of circle
	
  	printf("\nArea of Rectangle : %f", area_Rectangle);	//printf function calling to print area of rectangle
  	printf("\nPerimeter of Rectangle : %f", perimeter_Rectangle);	//printf function calling to print perimeter of rectangle
  
  	return 0;	//Return statement
}
//End of main function body
