//Author Name: Pranoy Bhan
//Creation Date: 31 March 2021
//Purpose: 1D and 2D arrays passed as arguments to a single function and the function implementation should simply print those arrays passed as arguments.

#include <stdio.h>  // Preprocessor directive for standard input and output header file
void displayNumbers(int num[2][2]);
int main() 
{	//start of the main body
    
	int num[2][2],i,j;	// Array and variable declaration
    printf("Enter 4 numbers:\n"); //printf function calling for 4 numbers
    for (i = 0; i < 2; ++i) 
        for (j = 0; j < 2; ++j)
            scanf("%d", &num[i][j]);

    // passing multi-dimensional array to a function
    displayNumbers(num);
    return 0;
}

void displayNumbers(int num[2][2])
{
    printf("Displaying:\n");
    for (int i = 0; i < 2; ++i)
	{
        for (int j = 0; j < 2; ++j) 
		{
           printf("%d\n", num[i][j]);
        }
    }
}
