//Author Name: Pranoy Bhan
//Creation Date: 31 March 2021
//Purpose: Binary Search of Number

#include <stdio.h>	//Preprocessor directive to include standard input output header file
int main()
{	//start of main function body
	
  int c, first, last, middle, n, search, array[100];	//variable declaration and array initialization

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  printf("Enter value to find\n");
  scanf("%d", &search);

  first = 0;
  last = n - 1;
  middle = (first+last)/2;

  while (first <= last) 
  {
    if (array[middle] < search)
      first = middle + 1;
    else if (array[middle] == search) 
	{
      printf("%d found at location %d.\n", search, middle+1);
      break;
    }
    else
      last = middle - 1;

    middle = (first + last)/2;
  }
  if (first > last)
    printf("Not found! %d isn't present in the list.\n", search);

  return 0;	//return statement
}	//end of main function body
