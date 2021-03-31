//Author Name: Pranoy Bhan
//Creation Date: 30 March 2021
//Purpose: To sort array in ascending order

#include <stdio.h>

void main()
{	//start of main function body	

    int arr1[10];	//array initialization
    int n, i, j, tmp;	//variable declaration
	
	
       printf("\n\nsort elements of array in ascending order :\n ");
       printf("----------------------------------------------\n");	

    printf("Input the size of array : ");
    scanf("%d", &n);

       printf("Input %d elements in the array :\n",n);	//printing elements in array
       
       //forloop body
       for(i=0;i<n;i++)
	   {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
       }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr1[j] <arr1[i])
            {
                tmp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = tmp;
            }
        }
    }
    printf("\nElements of array in sorted ascending order:\n");	//printing elements of array in ascending order 
    for(i=0; i<n; i++)
    {
        printf("%d  ", arr1[i]);
    }
	        printf("\n\n");
}	//end of main function body

