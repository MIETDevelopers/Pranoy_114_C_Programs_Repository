//Author name: Pranoy Bhan
//Creation date: 21 March 2021
//Purpose: Sorting an array using insertion sort

#include <stdio.h>	//Preprocessor directive to include standard input output function header file
int main()
{	//start of the main body function
    int n, i, j, temp;	//Declaring variables of integer data type
    int arr[10];	//declaring an array
    
	//This will determine the limit of values according to user input.
    printf("Enter number of elements\n");	//printf function calling to print the elements
    scanf("%d", &n);	//scanf function calling to input the value given by user

    printf("Enter %d integers\n", n);	//printf function calling to print the integers
    for (i = 0; i < n; i++)
	{	//start for loop body
        scanf("%d", &arr[i]);	//Scanf function calling to input the value given by user
    }	//end of for loop body
    for (i = 1 ; i <= n - 1; i++)
	{	//start of for loop body
	    j = i;	//j is being assigned to i
            while ( j > 0 && arr[j-1] > arr[j])
			{	//start of while body
            //Swap function will help for the purpose.       
                temp     = arr[j];	// temp is assigned to arr[j]
                arr[j]   = arr[j-1];	// arr[j] is assigned to arr[j-1]
                arr[j-1] = temp;	//arr[j-1]is assigned to temp
                j--;	//decrement j by 1
            }	//End of while loop body 
    }	//end of function
    
    printf("Sorted list in ascending order:\n");	//printf function calling to print Sorted list in ascending order
    for (i = 0; i <= n - 1; i++)
	{	//start of for loop body
        printf("%d\n", arr[i]);	//printf function calling to print array 
    }	//end of for loop body
    return 0;	//returning statement
}	//End of main function body
