//Author name: Pranoy Bhan
//Creation date: 21 March 2021
//Purpose: To read and print elements in two dimensional array 

#include<stdio.h>	//Preprocessive directive to include standard input output functions header file
int main()
{	//Start of the main body function
   int disp[2][3];	//2D array declaration
   int i, j;	//variable declaration of integer type
   
   //start of for loop
   for(i=0; i<2; i++)
    {
      for(j=0;j<3;j++)
		{
         printf("Enter value for disp[%d][%d]:", i, j);	//printf function calling to print the value for disp
         scanf("%d", &disp[i][j]);	//scanf function calling to input the value given by user
    	}
	}
   
   //Displaying array elements
   printf("Two Dimensional array elements:\n");	//printf function calling to print the two dimensional array elements
   for(i=0; i<2; i++) 
	{
      for(j=0;j<3;j++) 
		{
         printf("%d ", disp[i][j]);	//printf function calling 
         //if statement
         if(j==2)
			{
            	printf("\n");	//printf function calling to print the number 
    		}
    	}
	}
   return 0;	//return statement
} //end of the main body function
