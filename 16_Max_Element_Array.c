//Author name: Pranoy Bhan
//Creation date:21 March 2021
//Purpose: To find max element and index in array

#include<stdio.h>//Preprocessor directive to include standard input output function header file
int main()
{	//Start of the main function body
	
	int i;	//Declaring variable of integer data type
	float arr[3];	//Declaring of array of float data type

	printf("Please enter three numbers:\n ");	//printf function calling to print three numbers

	for (i = 0; i < 3; ++i)
	{	//start of for loop body
    scanf("%f", &arr[i]);	//scanf function calling to take input from user
	}	//end of body of for loop

		for (i = 1; i < 3; ++i)	//for loop
		{
    	if (arr[0] < arr[i])	//if statement
        	arr[0] = arr[i];
		}
	printf("Largest element = %.2f", arr[0]);	//printf function calling to print the largest element

	return 0;	//returning statement
}	//End of main function body
