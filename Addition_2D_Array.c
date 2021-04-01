//Author Name: Pranoy Bhan
//Creation Date: 31 March 2021
//Purpose: Addition of 2 2D arrays

#include <stdio.h> // Preprocessive directory to include standard input and output header file#include <stdio.h>

int main()
{	//start of main function body

    int rowCount, columnCount, i, j;	//variable declaration
    int firstMatrix[10][10], secondMatrix[10][10], resultMatrix[10][10];	//array initialization

    printf("Number of rows of matrices to be added : ");	//printing number of rows of matrices
    scanf("%d", &rowCount);

    printf("Number of columns matrices to be added : ");
    scanf("%d", &columnCount);

    printf("Elements of first matrix : \n");
	
	//forloop body
    for (i = 0; i < rowCount; i++)	//forloop for rows
        for (j = 0; j < columnCount; j++)	//forloop for columns
            scanf("%d", &firstMatrix[i][j]);

    printf("Elements of second matrix : \n");

    for (i = 0; i < rowCount; i++)
        for (j = 0; j < columnCount; j++)
            scanf("%d", &secondMatrix[i][j]);

    printf("Sum of entered matrices : \n");

    for (i = 0; i < rowCount; i++)
    {
        for (j = 0; j < columnCount; j++)
        {
            resultMatrix[i][j] = firstMatrix[i][j] + secondMatrix[i][j];	//addition of matrices
            printf("%d\t",resultMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}	//end of main function body
