//Author name: Pranoy Bhan
//Creation date: 21 March 2021
//Purpose: Searching an element in an array using linear search    

#include <stdio.h>	//Preprocessor directive to include standard input output function header file
void main()
{  //Start of main function body
    int num;	//Declaring variable of integer data type
    int i,  keyNum, found = 0;	//Declaring variable of integer data type
 
    printf("Enter the number of elements: \n");	//printf function calling to print the numbers of elements
    scanf("%d", &num);	//Scanf function calling to input the value given by user
    int array[num];	//Array Declaration
    printf("Enter the elements one by one: \n");	//printf function calling to print the elements one by one
    for (i = 0; i < num; i++)
	{	//start for loop body
        scanf("%d", &array[i]); //input from the user 
    }	//end of for loop body
 
    printf("Enter the element to be searched: ");	//printf function calling to print the element to be searched
    scanf("%d", &keyNum);	//scanf function calling to input the value given by user
   
    // This step will determine Linear search.
    for (i = 0; i < num ; i++)
	{	//start of for loop body
        if (keyNum == array[i] )
		{	//if statement body starts
            found = 1;	//found is assigned to 1
            break;	//break statement
        }	//End of body of if statement
    }	//end of body
    
	//This will give the output based on user input.
    if (found == 1) //if statement
        printf("Element is present in the array at position %d .",i+1);	//printf function calling to print the element is present the in array
    else	//else statement
        printf("Element is not present in the array.\n");	//printf function calling  to print the element is not the in the array
}	//end of main function body
