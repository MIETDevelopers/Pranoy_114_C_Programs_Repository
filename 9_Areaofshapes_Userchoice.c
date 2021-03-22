#include <stdio.h>	//Preprocessor directive to include standard input output header file
#include <conio.h>	//Preprocessor directive to include console input output header file
int main()
{
	float side, area_Square, area_Circle, radius,length, breadth, area_Rectangle, perimeter_Rectangle, circumfernce, perimeter_Square;	//variable declaration
  
  	printf("Enter length of side of square\n");
  	scanf("%f", &side);
  	area_Square=side*side;
  	perimeter_Square=4*side;
	
	printf("\nEnter the radius of Circle : ");
	scanf("%f", &radius);
	area_Circle=3.14*radius*radius;
	circumfernce=2*(3.14*radius);
	
  	printf("\nEnter the Length of Rectangle : ");
  	scanf("%f", &length);
  	printf("\nEnter the Breadth of Rectangle : ");
  	scanf("%f", &breadth);
  	area_Rectangle=length*breadth;
  	perimeter_Rectangle=2*(length+breadth);
  
  	printf("Area of square : %f\n", area_Square);
  	printf("perimeter of Square :%f\n",perimeter_Square);
	
  	printf("\n Area of Circle : %f", area_Circle);
	printf("\nCircumferene of circle is : %f",circumfernce);
	
  	printf("\nArea of Rectangle : %f", area_Rectangle);
  	printf("\nPerimeter of Rectangle : %f", perimeter_Rectangle);
  
  	return 0;
}

