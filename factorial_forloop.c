//Author Name: Pranoy Bhan
//Creation Date: 20 March 2021
//Purpose: To find the Factorial of a Number using for loop 

#include<stdio.h>	//Preprocessor directive to include input output function header file
int main()
{	//Start of main body
	
	int n,i,f;	//Declaring variables of integer data type
	f=1;	//value assignment to variable
	
	printf("Enter a Number : ");	//printf function calling to print Number
	scanf("%d",&n);	//scanf function calling for user input
	for (i=1; i<=n; i++)
	{	//start of function body
		
		f=f*i;	//factorial formula
	}
	printf("%d",f);	//printf function calling to print factorial
	return 0;	//Return statement
}//End of main function body
